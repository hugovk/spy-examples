from operator import OpImpl, OpArg
from unsafe import gc_alloc, ptr

# hi

@blue
def zero(T: type) -> dynamic:
    if T == i32:
        return 0
    if T == f64:
        return 0.0
    if T == ptr[V3]:
        return ptr[V3].NULL


@blue
def ArrayData(DTYPE):
    @struct
    class _ArrayData:
        length: i32
        capacity: i32
        items: ptr[DTYPE]

    return _ArrayData


def new_V3(x: f64, y: f64, z: f64) -> ptr[V3]:
    v = gc_alloc(V3)(1)
    v.x = x
    v.y = y
    v.z = z
    return v


@blue
def ndarray1(DTYPE):

    @typelift
    class ndarray:
        __ll__: ptr[ArrayData(DTYPE)]

        def __new__(cls: type, length: i32) -> ndarray:
            data = gc_alloc(ArrayData(DTYPE))(1)
            data.length = length
            data.capacity = 16
            if length > data.capacity:
                data.capacity = length
            data.items = gc_alloc(DTYPE)(data.capacity)
            i = 0
            while i < length:
                data.items[i] = zero(DTYPE)
                i = i + 1
            return ndarray.__lift__(data)

        @blue
        def __CALL_METHOD__(v_self: OpArg, v_meth: OpArg,
                            v_arg: OpArg) -> OpImpl:

            if v_meth.blueval == 'append':

                def append(arr: ndarray, value: DTYPE) -> void:
                    ll = arr.__ll__
                    if ll.length >= ll.capacity:
                        # resize needed - double the capacity
                        new_capacity = ll.capacity * 2
                        if new_capacity == 0:
                            new_capacity = 1
                        new_items = gc_alloc(DTYPE)(new_capacity)
                        # copy existing items
                        i = 0
                        while i < ll.length:
                            new_items[i] = ll.items[i]
                            i = i + 1
                        ll.items = new_items
                        ll.capacity = new_capacity

                    ll.items[ll.length] = value
                    ll.length = ll.length + 1

                return OpImpl(append, [v_self, v_arg])

            else:
                # XXX, it should be OpImpl.NULL but we don't have it at
                # applevel
                return None


        @blue
        def __GETITEM__(v_arr: OpArg, v_i: OpArg) -> OpImpl:

            def getitem(arr: ndarray, i: i32) -> DTYPE:
                ll = arr.__ll__
                if i >= ll.length:
                    print("IndexError")
                    # raise...
                return ll.items[i]

            return OpImpl(getitem, None)


        @blue
        def __SETITEM__(v_arr: OpArg, v_i: OpArg, v_v: OpArg) -> OpImpl:

            def setitem(arr: ndarray, i: i32, v: DTYPE) -> void:
                ll = arr.__ll__
                if i >= ll.length:
                    print("IndexError")
                    # raise...
                ll.items[i] = v

            return OpImpl(setitem, None)

    return ndarray


@struct
class V3:
    x: f64
    y: f64
    z: f64


def dot2(v: ptr[V3], x: f64, y: f64) -> f64:
    return v.x * x + v.y * y


def dot3(v: ptr[V3], x: f64, y: f64, z: f64) -> f64:
    return v.x * x + v.y * y + v.z * z


var _PERM = ptr[ArrayData(i32)].NULL
var _V3_P = ptr[ArrayData(ptr[V3])].NULL
var _V3_I = ptr[ArrayData(ptr[V3])].NULL
var _P = ptr[ArrayData(i32)].NULL


def get_PERM() -> ndarray1(i32):
    return ndarray1(i32).__lift__(_PERM)


def get_V3_P() -> ndarray1(ptr[V3]):
    return ndarray1(ptr[V3]).__lift__(_V3_P)


def get_V3_I() -> ndarray1(ptr[V3]):
    return ndarray1(ptr[V3]).__lift__(_V3_I)


def get_P() -> ndarray1(i32):
    return ndarray1(i32).__lift__(_P)


def seed(s: i32) -> void:
    PERM = get_PERM()
    V3_P = get_V3_P()
    V3_I = get_V3_I()
    P = get_P()

    if s < 256:
        s = s | (s << 8)

    i = 0
    while i < 256:
        if i & 1:
            v = P[i] ^ (s & 255)
        else:
            v = P[i] ^ ((s >> 8) & 255)

        PERM[i] = v
        PERM[i + 256] = v
        V3_P[i] = V3_I[v % 12]
        V3_P[i + 256] = V3_I[v % 12]
        i = i + 1


def fade(t: f64) -> f64:
    return t * t * t * (t * (t * 6 - 15) + 10)


def lerp(a: f64, b: f64, t: f64) -> f64:
    return (1 - t) * a + t * b


def perlin3(x: f64, y: f64, z: f64) -> f64:
    PERM = get_PERM()
    V3_P = get_V3_P()

    # grid cells
    x_c: i32 = x
    y_c: i32 = y
    z_c: i32 = z
    # relative coords within the cell
    x = x - x_c
    y = y - y_c
    z = z - z_c
    # wrap cells
    x_c = x_c & 255
    y_c = y_c & 255
    z_c = z_c & 255
    # noise contributions to corners
    n000 = dot3(V3_P[x_c + PERM[y_c + PERM[z_c]]], x, y, z)
    n001 = dot3(V3_P[x_c + PERM[y_c + PERM[z_c + 1]]], x, y, z - 1)
    n010 = dot3(V3_P[x_c + PERM[y_c + 1 + PERM[z_c]]], x, y - 1, z)
    n011 = dot3(V3_P[x_c + PERM[y_c + 1 + PERM[z_c + 1]]], x, y - 1, z - 1)
    n100 = dot3(V3_P[x_c + 1 + PERM[y_c + PERM[z_c]]], x - 1, y, z)
    n101 = dot3(V3_P[x_c + 1 + PERM[y_c + PERM[z_c + 1]]], x - 1, y, z - 1)
    n110 = dot3(V3_P[x_c + 1 + PERM[y_c + 1 + PERM[z_c]]], x - 1, y - 1, z)
    n111 = dot3(V3_P[x_c + 1 + PERM[y_c + 1 + PERM[z_c + 1]]], x - 1, y - 1, z - 1)
    # fade curve
    u = fade(x)
    v = fade(y)
    w = fade(z)
    # interpolation
    return lerp(
        lerp(lerp(n000, n100, u), lerp(n001, n101, u), w),
        lerp(lerp(n010, n110, u), lerp(n011, n111, u), w),
        v,
    )


def init() -> void:
    PERM = ndarray1(i32)(512)
    _PERM = PERM.__ll__

    V3_P = ndarray1(ptr[V3])(512)
    _V3_P = V3_P.__ll__

    V3_I = ndarray1(ptr[V3])(12)
    _V3_I = V3_I.__ll__
    V3_I[0] = new_V3(1, 1, 0)
    V3_I[1] = new_V3(-1, 1, 0)
    V3_I[2] = new_V3(1, -1, 0)
    V3_I[3] = new_V3(-1, -1, 0)
    V3_I[4] = new_V3(1, 0, 1)
    V3_I[5] = new_V3(-1, 0, 1)
    V3_I[6] = new_V3(1, 0, -1)
    V3_I[7] = new_V3(-1, 0, -1)
    V3_I[8] = new_V3(0, 1, 1)
    V3_I[9] = new_V3(0, -1, 1)
    V3_I[10] = new_V3(0, 1, -1)
    V3_I[11] = new_V3(0, -1, -1)   

    P = ndarray1(i32)(256)
    _P = P.__ll__    
    P[0] = 151
    P[1] = 160
    P[2] = 137
    P[3] = 91
    P[4] = 90
    P[5] = 15
    P[6] = 131
    P[7] = 13
    P[8] = 201
    P[9] = 95
    P[10] = 96
    P[11] = 53
    P[12] = 194
    P[13] = 233
    P[14] = 7
    P[15] = 225
    P[16] = 140
    P[17] = 36
    P[18] = 103
    P[19] = 30
    P[20] = 69
    P[21] = 142
    P[22] = 8
    P[23] = 99
    P[24] = 37
    P[25] = 240
    P[26] = 21
    P[27] = 10
    P[28] = 23
    P[29] = 190
    P[30] = 6
    P[31] = 148
    P[32] = 247
    P[33] = 120
    P[34] = 234
    P[35] = 75
    P[36] = 0
    P[37] = 26
    P[38] = 197
    P[39] = 62
    P[40] = 94
    P[41] = 252
    P[42] = 219
    P[43] = 203
    P[44] = 117
    P[45] = 35
    P[46] = 11
    P[47] = 32
    P[48] = 57
    P[49] = 177
    P[50] = 33
    P[51] = 88
    P[52] = 237
    P[53] = 149
    P[54] = 56
    P[55] = 87
    P[56] = 174
    P[57] = 20
    P[58] = 125
    P[59] = 136
    P[60] = 171
    P[61] = 168
    P[62] = 68
    P[63] = 175
    P[64] = 74
    P[65] = 165
    P[66] = 71
    P[67] = 134
    P[68] = 139
    P[69] = 48
    P[70] = 27
    P[71] = 166
    P[72] = 77
    P[73] = 146
    P[74] = 158
    P[75] = 231
    P[76] = 83
    P[77] = 111
    P[78] = 229
    P[79] = 122
    P[80] = 60
    P[81] = 211
    P[82] = 133
    P[83] = 230
    P[84] = 220
    P[85] = 105
    P[86] = 92
    P[87] = 41
    P[88] = 55
    P[89] = 46
    P[90] = 245
    P[91] = 40
    P[92] = 244
    P[93] = 102
    P[94] = 143
    P[95] = 54
    P[96] = 65
    P[97] = 25
    P[98] = 63
    P[99] = 161
    P[100] = 1
    P[101] = 216
    P[102] = 80
    P[103] = 73
    P[104] = 209
    P[105] = 76
    P[106] = 132
    P[107] = 187
    P[108] = 208
    P[109] = 89
    P[110] = 18
    P[111] = 169
    P[112] = 200
    P[113] = 196
    P[114] = 135
    P[115] = 130
    P[116] = 116
    P[117] = 188
    P[118] = 159
    P[119] = 86
    P[120] = 164
    P[121] = 100
    P[122] = 109
    P[123] = 198
    P[124] = 173
    P[125] = 186
    P[126] = 3
    P[127] = 64
    P[128] = 52
    P[129] = 217
    P[130] = 226
    P[131] = 250
    P[132] = 124
    P[133] = 123
    P[134] = 5
    P[135] = 202
    P[136] = 38
    P[137] = 147
    P[138] = 118
    P[139] = 126
    P[140] = 255
    P[141] = 82
    P[142] = 85
    P[143] = 212
    P[144] = 207
    P[145] = 206
    P[146] = 59
    P[147] = 227
    P[148] = 47
    P[149] = 16
    P[150] = 58
    P[151] = 17
    P[152] = 182
    P[153] = 189
    P[154] = 28
    P[155] = 42
    P[156] = 223
    P[157] = 183
    P[158] = 170
    P[159] = 213
    P[160] = 119
    P[161] = 248
    P[162] = 152
    P[163] = 2
    P[164] = 44
    P[165] = 154
    P[166] = 163
    P[167] = 70
    P[168] = 221
    P[169] = 153
    P[170] = 101
    P[171] = 155
    P[172] = 167
    P[173] = 43
    P[174] = 172
    P[175] = 9
    P[176] = 129
    P[177] = 22
    P[178] = 39
    P[179] = 253
    P[180] = 19
    P[181] = 98
    P[182] = 108
    P[183] = 110
    P[184] = 79
    P[185] = 113
    P[186] = 224
    P[187] = 232
    P[188] = 178
    P[189] = 185
    P[190] = 112
    P[191] = 104
    P[192] = 218
    P[193] = 246
    P[194] = 97
    P[195] = 228
    P[196] = 251
    P[197] = 34
    P[198] = 242
    P[199] = 193
    P[200] = 238
    P[201] = 210
    P[202] = 144
    P[203] = 12
    P[204] = 191
    P[205] = 179
    P[206] = 162
    P[207] = 241
    P[208] = 81
    P[209] = 51
    P[210] = 145
    P[211] = 235
    P[212] = 249
    P[213] = 14
    P[214] = 239
    P[215] = 107
    P[216] = 49
    P[217] = 192
    P[218] = 214
    P[219] = 31
    P[220] = 181
    P[221] = 199
    P[222] = 106
    P[223] = 157
    P[224] = 184
    P[225] = 84
    P[226] = 204
    P[227] = 176
    P[228] = 115
    P[229] = 121
    P[230] = 50
    P[231] = 45
    P[232] = 127
    P[233] = 4
    P[234] = 150
    P[235] = 254
    P[236] = 138
    P[237] = 236
    P[238] = 205
    P[239] = 93
    P[240] = 222
    P[241] = 114
    P[242] = 67
    P[243] = 29
    P[244] = 24
    P[245] = 72
    P[246] = 243
    P[247] = 141
    P[248] = 128
    P[249] = 195
    P[250] = 78
    P[251] = 66
    P[252] = 215
    P[253] = 61
    P[254] = 156
    P[255] = 180


###
### Marching squares
###

var _height_map = ptr[ArrayData(f64)].NULL
def get_height_map() -> ndarray1(f64):
    return ndarray1(f64).__lift__(_height_map)

def make_height_map(width: i32, height: i32) -> void:
    # width and height already scaled
    height_map = ndarray1(f64)(width * height)
    _height_map = height_map.__ll__    

def update_height_map(width: i32, height: i32, scale: f64, z: f64) -> void:
    # width and height already scaled
    # scale = grid_scale / noise_factor
    height_map = get_height_map()

    i: i32 = 0
    y: f64 = 0
    while y < height:
        x: f64 = 0
        while x < width:
            n = perlin3(scale * x, scale * y, scale * z)
            n = n + 0.50 * perlin3(2 * scale * x, 2 * scale * y, 2 * scale * z)
            n = n + 0.25 * perlin3(4 * scale * x, 4 * scale * y, 4 * scale * z)
            height_map[i] = n
            i = i + 1
            x = x + 1
        y = y + 1

def crossfade_height_map(width: i32, height: i32, crossfade_range: i32) -> void:
    # width and height already scaled
    height_map = get_height_map()

    weight: f64 = 0.0
    y: i32 = 0
    while y < height:
        x: i32 = 0
        while x < crossfade_range:
            weight = x
            weight = weight / crossfade_range
            pos_i = y * width + x
            neg_i = y * width + width - crossfade_range + x
            old_pos = height_map[pos_i]
            old_neg = height_map[neg_i]
            height_map[neg_i] = weight * old_pos + (1.0 - weight) * old_neg
            height_map[pos_i] = height_map[neg_i]
            x = x + 1
        y = y + 1

def interpolate(sq_threshold: f64, v1: f64, v2: f64) -> f64:
    if v1 == v2:
        return v1
    return (sq_threshold - v1) / (v2 - v1)

def append_p(lines: ndarray1(f64), xs: ndarray1(f64), ys: ndarray1(f64), a: i32, b: i32) -> void:
    x1: f64 = xs[a]
    y1: f64 = ys[a]
    x2: f64 = xs[b]
    y2: f64 = ys[b]

    lines.append(x1)
    lines.append(y1)
    lines.append(0)
    lines.append(x2)
    lines.append(y2)
    lines.append(0)    

def marching_squares(width: i32, height: i32, sq_threshold: f64) -> ndarray1(f64):
    # width and height already scaled
    height_map = get_height_map()
    lines = ndarray1(f64)(0)
    edge_points_x = ndarray1(f64)(4)
    edge_points_y = ndarray1(f64)(4)

    i = 0
    y = 0
    while y < height - 1:
        x = 0
        while x < width - 1:  # overlaps crossfade, that's on purpose
            tl = height_map[y*width + x]
            tr = height_map[y*width + x+1]
            bl = height_map[(y+1)*width + x]
            br = height_map[(y+1)*width + x+1]

            sq_idx = 0
            if tl > sq_threshold:
                sq_idx = sq_idx | 8
            if tr > sq_threshold:
                sq_idx = sq_idx | 4
            if br > sq_threshold:
                sq_idx = sq_idx | 2
            if bl > sq_threshold:
                sq_idx = sq_idx | 1

            edge_points_x[0] = x + interpolate(sq_threshold, tl, tr)
            edge_points_y[0] = y
            edge_points_x[1] = x + 1
            edge_points_y[1] = y + interpolate(sq_threshold, tr, br)
            edge_points_x[2] = x + interpolate(sq_threshold, bl, br)
            edge_points_y[2] = y + 1
            edge_points_x[3] = x
            edge_points_y[3] = y + interpolate(sq_threshold, tl, bl)
    
            if sq_idx == 0:
                pass
            elif sq_idx == 1:
                append_p(lines, edge_points_x, edge_points_y, 3, 2)
            elif sq_idx == 2:
                append_p(lines, edge_points_x, edge_points_y, 2, 1)
            elif sq_idx == 3:
                append_p(lines, edge_points_x, edge_points_y, 3, 1)
            elif sq_idx == 4:
                append_p(lines, edge_points_x, edge_points_y, 0, 1)
            elif sq_idx == 5:  # ambiguous
                append_p(lines, edge_points_x, edge_points_y, 0, 3)
                append_p(lines, edge_points_x, edge_points_y, 1, 2)
            elif sq_idx == 6:
                append_p(lines, edge_points_x, edge_points_y, 0, 2)
            elif sq_idx == 7:
                append_p(lines, edge_points_x, edge_points_y, 0, 3)
            elif sq_idx == 8:
                append_p(lines, edge_points_x, edge_points_y, 0, 3)
            elif sq_idx == 9:
                append_p(lines, edge_points_x, edge_points_y, 0, 2)
            elif sq_idx == 10:  # ambiguous
                append_p(lines, edge_points_x, edge_points_y, 0, 1)
                append_p(lines, edge_points_x, edge_points_y, 2, 3)
            elif sq_idx == 11:
                append_p(lines, edge_points_x, edge_points_y, 0, 1)
            elif sq_idx == 12:
                append_p(lines, edge_points_x, edge_points_y, 3, 1)
            elif sq_idx == 13:
                append_p(lines, edge_points_x, edge_points_y, 2, 1)
            elif sq_idx == 14:
                append_p(lines, edge_points_x, edge_points_y, 3, 2)
            elif sq_idx == 15:
                pass

            x = x + 1
            i = i + 1
        y = y + 1
    
    return lines

def mprint(arr: ndarray1(f64)) -> void:
    print(arr.__ll__.length)

###
### Main
###

def main() -> void:
    init()
    PERM = get_PERM()
    V3_P = get_V3_P()
    V3_I = get_V3_I()
    P = get_P()
    print(PERM[0])
    # print(V3_P[0])
    print(P[44])
    print(V3_I[6].z)
    seed(44)
    print("mhm")
    make_height_map(480, 216)

    print("uhm")
    update_height_map(480, 216, 10.0 / 500.0, 0)

    print("cfhm")
    crossfade_height_map(480, 216, 38)

    hm = get_height_map()
    S = 0
    i = S
    while i < S + 38:
        print(hm[i])
        i = i + 1

    print("ms 0")
    mprint(marching_squares(480, 216, 0))
    print("ms 0.3")
    mprint(marching_squares(480, 216, 0.3))
    print("ms -0.3")
    mprint(marching_squares(480, 216, 0 -0.3))
    print("ms 0.45")
    mprint(marching_squares(480, 216, 0.45))
    print("ms -0.45")
    mprint(marching_squares(480, 216, 0 -0.45))
    print("ms 0.6")
    mprint(marching_squares(480, 216, 0.6))
    print("ms -0.6")
    mprint(marching_squares(480, 216, 0 -0.6))
    print("ms -0.8")
    mprint(marching_squares(480, 216, 0 -0.8))
    print("ms 0.8")
    mprint(marching_squares(480, 216, 0.8))