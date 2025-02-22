#include <spy.h>

#ifdef SPY_DEBUG_C
#    define SPY_LINE(SPY, C) C "/Users/ambv/Python/spy-examples/perlin/perlin.c"
#else
#    define SPY_LINE(SPY, C) SPY "/Users/ambv/Python/spy-examples/perlin/perlin.spy"
#endif

// forward type declarations
typedef struct spy_perlin$V3 spy_perlin$V3;
typedef struct spy_unsafe$ptr__perlin$V3 {
    spy_perlin$V3 *p;
#ifdef SPY_DEBUG
    size_t length;
#endif
} spy_unsafe$ptr__perlin$V3;
typedef struct spy_perlin$ArrayData$_ArrayData$0 spy_perlin$ArrayData$_ArrayData$0;
typedef struct spy_unsafe$ptr__builtins$i32 {
    int32_t *p;
#ifdef SPY_DEBUG
    size_t length;
#endif
} spy_unsafe$ptr__builtins$i32;
typedef struct spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0 {
    spy_perlin$ArrayData$_ArrayData$0 *p;
#ifdef SPY_DEBUG
    size_t length;
#endif
} spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0;
typedef struct spy_perlin$ArrayData$_ArrayData$1 spy_perlin$ArrayData$_ArrayData$1;
typedef struct spy_unsafe$ptr__unsafe$ptr__perlin$V3 {
    spy_unsafe$ptr__perlin$V3 *p;
#ifdef SPY_DEBUG
    size_t length;
#endif
} spy_unsafe$ptr__unsafe$ptr__perlin$V3;
typedef struct spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1 {
    spy_perlin$ArrayData$_ArrayData$1 *p;
#ifdef SPY_DEBUG
    size_t length;
#endif
} spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1;
typedef struct spy_perlin$ndarray1$ndarray$0 {
    spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0 ll;
} spy_perlin$ndarray1$ndarray$0;
typedef struct spy_perlin$ndarray1$ndarray$1 {
    spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1 ll;
} spy_perlin$ndarray1$ndarray$1;

// type definitions
struct spy_perlin$V3 {
    double x;
    double y;
    double z;
};

struct spy_perlin$ArrayData$_ArrayData$0 {
    int32_t length;
    spy_unsafe$ptr__builtins$i32 items;
};

struct spy_perlin$ArrayData$_ArrayData$1 {
    int32_t length;
    spy_unsafe$ptr__unsafe$ptr__perlin$V3 items;
};


// ptr and typelift accessors
SPY_PTR_FUNCTIONS(spy_unsafe$ptr__perlin$V3, spy_perlin$V3);
#define spy_unsafe$ptr__perlin$V3$NULL ((spy_unsafe$ptr__perlin$V3){0})
SPY_PTR_FUNCTIONS(spy_unsafe$ptr__builtins$i32, int32_t);
#define spy_unsafe$ptr__builtins$i32$NULL ((spy_unsafe$ptr__builtins$i32){0})
SPY_PTR_FUNCTIONS(spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0, spy_perlin$ArrayData$_ArrayData$0);
#define spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0$NULL ((spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0){0})
SPY_PTR_FUNCTIONS(spy_unsafe$ptr__unsafe$ptr__perlin$V3, spy_unsafe$ptr__perlin$V3);
#define spy_unsafe$ptr__unsafe$ptr__perlin$V3$NULL ((spy_unsafe$ptr__unsafe$ptr__perlin$V3){0})
SPY_PTR_FUNCTIONS(spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1, spy_perlin$ArrayData$_ArrayData$1);
#define spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1$NULL ((spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1){0})
SPY_TYPELIFT_FUNCTIONS(spy_perlin$ndarray1$ndarray$0, spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0);
SPY_TYPELIFT_FUNCTIONS(spy_perlin$ndarray1$ndarray$1, spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1);

// constants and functions
spy_unsafe$ptr__perlin$V3 spy_perlin$new_V3(double x, double y, double z);
double spy_perlin$dot2(spy_unsafe$ptr__perlin$V3 v, double x, double y);
double spy_perlin$dot3(spy_unsafe$ptr__perlin$V3 v, double x, double y, double z);
spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0 spy_perlin$_PERM = {0};
spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1 spy_perlin$_V3_P = {0};
spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1 spy_perlin$_V3_I = {0};
spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0 spy_perlin$_P = {0};
spy_perlin$ndarray1$ndarray$0 spy_perlin$ndarray1$ndarray$0$__new__$0(void * cls, int32_t length);
spy_perlin$ndarray1$ndarray$0 spy_perlin$get_PERM(void);
spy_perlin$ndarray1$ndarray$1 spy_perlin$ndarray1$ndarray$1$__new__$0(void * cls, int32_t length);
spy_perlin$ndarray1$ndarray$1 spy_perlin$get_V3_P(void);
spy_perlin$ndarray1$ndarray$1 spy_perlin$get_V3_I(void);
spy_perlin$ndarray1$ndarray$0 spy_perlin$get_P(void);
void spy_perlin$seed(int32_t s);
double spy_perlin$fade(double t);
double spy_perlin$lerp(double a, double b, double t);
double spy_perlin$perlin3(double x, double y, double z);
void spy_perlin$init(void);
void spy_perlin$main(void);
int32_t spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(spy_perlin$ndarray1$ndarray$0 arr, int32_t i);
static spy_Str SPY_g_str0 = {10, "IndexError"};
void spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(spy_perlin$ndarray1$ndarray$0 arr, int32_t i, int32_t v);
static spy_Str SPY_g_str1 = {10, "IndexError"};
spy_unsafe$ptr__perlin$V3 spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(spy_perlin$ndarray1$ndarray$1 arr, int32_t i);
static spy_Str SPY_g_str2 = {10, "IndexError"};
void spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(spy_perlin$ndarray1$ndarray$1 arr, int32_t i, spy_unsafe$ptr__perlin$V3 v);
static spy_Str SPY_g_str3 = {10, "IndexError"};

// content of the module
#line SPY_LINE(23, 23)
spy_unsafe$ptr__perlin$V3 spy_perlin$new_V3(double x, double y, double z) {
    spy_unsafe$ptr__perlin$V3 v;
    #line SPY_LINE(24, 26)
    v = spy_unsafe$ptr__perlin$V3$gc_alloc(1);
    v.p->x = x;
    v.p->y = y;
    v.p->z = z;
    return v;
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(82, 34)
double spy_perlin$dot2(spy_unsafe$ptr__perlin$V3 v, double x, double y) {
    return v.p->x * x + v.p->y * y;
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(86, 39)
double spy_perlin$dot3(spy_unsafe$ptr__perlin$V3 v, double x, double y, double z) {
    return v.p->x * x + v.p->y * y + v.p->z * z;
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(38, 44)
spy_perlin$ndarray1$ndarray$0 spy_perlin$ndarray1$ndarray$0$__new__$0(void * cls, int32_t length) {
    spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0 data;
    int32_t i;
    #line SPY_LINE(39, 48)
    data = spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0$gc_alloc(1);
    data.p->length = length;
    data.p->items = spy_unsafe$ptr__builtins$i32$gc_alloc(length);
    i = 0;
    while (i < length) {
        spy_unsafe$ptr__builtins$i32$store(data.p->items, i, 0);
        i = i + 1;
    }
    #line SPY_LINE(46, 57)
    return spy_perlin$ndarray1$ndarray$0$__lift__(data);
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(96, 61)
spy_perlin$ndarray1$ndarray$0 spy_perlin$get_PERM(void) {
    return spy_perlin$ndarray1$ndarray$0$__lift__(spy_perlin$_PERM);
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(38, 66)
spy_perlin$ndarray1$ndarray$1 spy_perlin$ndarray1$ndarray$1$__new__$0(void * cls, int32_t length) {
    spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1 data;
    int32_t i;
    #line SPY_LINE(39, 70)
    data = spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1$gc_alloc(1);
    data.p->length = length;
    data.p->items = spy_unsafe$ptr__unsafe$ptr__perlin$V3$gc_alloc(length);
    i = 0;
    while (i < length) {
        spy_unsafe$ptr__unsafe$ptr__perlin$V3$store(data.p->items, i, spy_unsafe$ptr__perlin$V3$NULL);
        i = i + 1;
    }
    #line SPY_LINE(46, 79)
    return spy_perlin$ndarray1$ndarray$1$__lift__(data);
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(100, 83)
spy_perlin$ndarray1$ndarray$1 spy_perlin$get_V3_P(void) {
    return spy_perlin$ndarray1$ndarray$1$__lift__(spy_perlin$_V3_P);
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(104, 88)
spy_perlin$ndarray1$ndarray$1 spy_perlin$get_V3_I(void) {
    return spy_perlin$ndarray1$ndarray$1$__lift__(spy_perlin$_V3_I);
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(108, 93)
spy_perlin$ndarray1$ndarray$0 spy_perlin$get_P(void) {
    return spy_perlin$ndarray1$ndarray$0$__lift__(spy_perlin$_P);
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(112, 98)
void spy_perlin$seed(int32_t s) {
    spy_perlin$ndarray1$ndarray$0 PERM;
    spy_perlin$ndarray1$ndarray$1 V3_P;
    spy_perlin$ndarray1$ndarray$1 V3_I;
    spy_perlin$ndarray1$ndarray$0 P;
    int32_t i;
    int32_t v;
    #line SPY_LINE(113, 106)
    PERM = spy_perlin$get_PERM();
    V3_P = spy_perlin$get_V3_P();
    V3_I = spy_perlin$get_V3_I();
    P = spy_perlin$get_P();
    #line SPY_LINE(118, 111)
    if (s < 256){
        s = s | s << 8;
    }
    i = 0;
    while (i < 256) {
        if (spy_operator$i32_to_bool(i & 1)){
            v = spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(P, i) ^ s & 255;
        } else {
            v = spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(P, i) ^ s >> 8 & 255;
        }
        spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(PERM, i, v);
        spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(PERM, i + 256, v);
        spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_P, i, spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(V3_I, v % 12));
        spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_P, i + 256, spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(V3_I, v % 12));
        i = i + 1;
    }
}
#line SPY_LINE(135, 129)
double spy_perlin$fade(double t) {
    return t * t * t * (t * (t * spy_operator$i32_to_f64(6) - spy_operator$i32_to_f64(15)) + spy_operator$i32_to_f64(10));
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(139, 134)
double spy_perlin$lerp(double a, double b, double t) {
    return (spy_operator$i32_to_f64(1) - t) * a + t * b;
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(143, 139)
double spy_perlin$perlin3(double x, double y, double z) {
    spy_perlin$ndarray1$ndarray$0 PERM;
    spy_perlin$ndarray1$ndarray$1 V3_P;
    spy_perlin$ndarray1$ndarray$1 V3_I;
    spy_perlin$ndarray1$ndarray$0 P;
    int32_t x_c;
    int32_t y_c;
    int32_t z_c;
    double n000;
    double n001;
    double n010;
    double n011;
    double n100;
    double n101;
    double n110;
    double n111;
    double u;
    double v;
    double w;
    #line SPY_LINE(144, 159)
    PERM = spy_perlin$get_PERM();
    V3_P = spy_perlin$get_V3_P();
    V3_I = spy_perlin$get_V3_I();
    P = spy_perlin$get_P();
    #line SPY_LINE(150, 164)
    x_c = spy_operator$f64_to_i32(x);
    y_c = spy_operator$f64_to_i32(y);
    z_c = spy_operator$f64_to_i32(z);
    #line SPY_LINE(154, 168)
    x = x - spy_operator$i32_to_f64(x_c);
    y = y - spy_operator$i32_to_f64(y_c);
    z = z - spy_operator$i32_to_f64(z_c);
    #line SPY_LINE(158, 172)
    x_c = x_c & 255;
    y_c = y_c & 255;
    z_c = z_c & 255;
    #line SPY_LINE(162, 176)
    n000 = spy_perlin$dot3(spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(V3_P, x_c + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, y_c + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, z_c))), x, y, z);
    n001 = spy_perlin$dot3(spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(V3_P, x_c + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, y_c + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, z_c + 1))), x, y, z - spy_operator$i32_to_f64(1));
    n010 = spy_perlin$dot3(spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(V3_P, x_c + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, y_c + 1 + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, z_c))), x, y - spy_operator$i32_to_f64(1), z);
    n011 = spy_perlin$dot3(spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(V3_P, x_c + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, y_c + 1 + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, z_c + 1))), x, y - spy_operator$i32_to_f64(1), z - spy_operator$i32_to_f64(1));
    n100 = spy_perlin$dot3(spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(V3_P, x_c + 1 + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, y_c + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, z_c))), x - spy_operator$i32_to_f64(1), y, z);
    n101 = spy_perlin$dot3(spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(V3_P, x_c + 1 + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, y_c + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, z_c + 1))), x - spy_operator$i32_to_f64(1), y, z - spy_operator$i32_to_f64(1));
    n110 = spy_perlin$dot3(spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(V3_P, x_c + 1 + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, y_c + 1 + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, z_c))), x - spy_operator$i32_to_f64(1), y - spy_operator$i32_to_f64(1), z);
    n111 = spy_perlin$dot3(spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(V3_P, x_c + 1 + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, y_c + 1 + spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, z_c + 1))), x - spy_operator$i32_to_f64(1), y - spy_operator$i32_to_f64(1), z - spy_operator$i32_to_f64(1));
    #line SPY_LINE(171, 185)
    u = spy_perlin$fade(x);
    v = spy_perlin$fade(y);
    w = spy_perlin$fade(z);
    #line SPY_LINE(175, 189)
    return spy_perlin$lerp(spy_perlin$lerp(spy_perlin$lerp(n000, n100, u), spy_perlin$lerp(n001, n101, u), w), spy_perlin$lerp(spy_perlin$lerp(n010, n110, u), spy_perlin$lerp(n011, n111, u), w), v);
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(182, 193)
void spy_perlin$init(void) {
    spy_perlin$ndarray1$ndarray$0 PERM;
    spy_perlin$ndarray1$ndarray$1 V3_P;
    spy_perlin$ndarray1$ndarray$1 V3_I;
    spy_perlin$ndarray1$ndarray$0 P;
    #line SPY_LINE(183, 199)
    PERM = spy_perlin$ndarray1$ndarray$0$__new__$0(0, 512);
    spy_perlin$_PERM = spy_perlin$ndarray1$ndarray$0$__unlift__(PERM);
    #line SPY_LINE(186, 202)
    V3_P = spy_perlin$ndarray1$ndarray$1$__new__$0(0, 512);
    spy_perlin$_V3_P = spy_perlin$ndarray1$ndarray$1$__unlift__(V3_P);
    #line SPY_LINE(189, 205)
    V3_I = spy_perlin$ndarray1$ndarray$1$__new__$0(0, 12);
    spy_perlin$_V3_I = spy_perlin$ndarray1$ndarray$1$__unlift__(V3_I);
    spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_I, 0, spy_perlin$new_V3(spy_operator$i32_to_f64(1), spy_operator$i32_to_f64(1), spy_operator$i32_to_f64(0)));
    spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_I, 1, spy_perlin$new_V3(spy_operator$i32_to_f64(-1), spy_operator$i32_to_f64(1), spy_operator$i32_to_f64(0)));
    spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_I, 2, spy_perlin$new_V3(spy_operator$i32_to_f64(1), spy_operator$i32_to_f64(-1), spy_operator$i32_to_f64(0)));
    spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_I, 3, spy_perlin$new_V3(spy_operator$i32_to_f64(-1), spy_operator$i32_to_f64(-1), spy_operator$i32_to_f64(0)));
    spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_I, 4, spy_perlin$new_V3(spy_operator$i32_to_f64(1), spy_operator$i32_to_f64(0), spy_operator$i32_to_f64(1)));
    spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_I, 5, spy_perlin$new_V3(spy_operator$i32_to_f64(-1), spy_operator$i32_to_f64(0), spy_operator$i32_to_f64(1)));
    spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_I, 6, spy_perlin$new_V3(spy_operator$i32_to_f64(1), spy_operator$i32_to_f64(0), spy_operator$i32_to_f64(-1)));
    spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_I, 7, spy_perlin$new_V3(spy_operator$i32_to_f64(-1), spy_operator$i32_to_f64(0), spy_operator$i32_to_f64(-1)));
    spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_I, 8, spy_perlin$new_V3(spy_operator$i32_to_f64(0), spy_operator$i32_to_f64(1), spy_operator$i32_to_f64(1)));
    spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_I, 9, spy_perlin$new_V3(spy_operator$i32_to_f64(0), spy_operator$i32_to_f64(-1), spy_operator$i32_to_f64(1)));
    spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_I, 10, spy_perlin$new_V3(spy_operator$i32_to_f64(0), spy_operator$i32_to_f64(1), spy_operator$i32_to_f64(-1)));
    spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(V3_I, 11, spy_perlin$new_V3(spy_operator$i32_to_f64(0), spy_operator$i32_to_f64(-1), spy_operator$i32_to_f64(-1)));
    #line SPY_LINE(204, 220)
    P = spy_perlin$ndarray1$ndarray$0$__new__$0(0, 256);
    spy_perlin$_P = spy_perlin$ndarray1$ndarray$0$__unlift__(P);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 0, 151);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 1, 160);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 2, 137);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 3, 91);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 4, 90);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 5, 15);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 6, 131);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 7, 13);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 8, 201);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 9, 95);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 10, 96);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 11, 53);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 12, 194);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 13, 233);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 14, 7);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 15, 225);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 16, 140);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 17, 36);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 18, 103);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 19, 30);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 20, 69);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 21, 142);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 22, 8);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 23, 99);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 24, 37);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 25, 240);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 26, 21);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 27, 10);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 28, 23);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 29, 190);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 30, 6);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 31, 148);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 32, 247);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 33, 120);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 34, 234);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 35, 75);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 36, 0);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 37, 26);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 38, 197);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 39, 62);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 40, 94);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 41, 252);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 42, 219);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 43, 203);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 44, 117);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 45, 35);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 46, 11);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 47, 32);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 48, 57);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 49, 177);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 50, 33);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 51, 88);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 52, 237);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 53, 149);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 54, 56);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 55, 87);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 56, 174);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 57, 20);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 58, 125);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 59, 136);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 60, 171);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 61, 168);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 62, 68);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 63, 175);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 64, 74);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 65, 165);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 66, 71);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 67, 134);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 68, 139);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 69, 48);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 70, 27);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 71, 166);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 72, 77);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 73, 146);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 74, 158);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 75, 231);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 76, 83);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 77, 111);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 78, 229);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 79, 122);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 80, 60);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 81, 211);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 82, 133);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 83, 230);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 84, 220);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 85, 105);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 86, 92);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 87, 41);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 88, 55);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 89, 46);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 90, 245);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 91, 40);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 92, 244);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 93, 102);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 94, 143);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 95, 54);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 96, 65);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 97, 25);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 98, 63);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 99, 161);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 100, 1);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 101, 216);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 102, 80);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 103, 73);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 104, 209);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 105, 76);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 106, 132);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 107, 187);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 108, 208);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 109, 89);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 110, 18);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 111, 169);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 112, 200);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 113, 196);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 114, 135);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 115, 130);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 116, 116);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 117, 188);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 118, 159);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 119, 86);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 120, 164);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 121, 100);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 122, 109);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 123, 198);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 124, 173);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 125, 186);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 126, 3);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 127, 64);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 128, 52);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 129, 217);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 130, 226);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 131, 250);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 132, 124);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 133, 123);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 134, 5);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 135, 202);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 136, 38);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 137, 147);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 138, 118);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 139, 126);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 140, 255);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 141, 82);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 142, 85);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 143, 212);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 144, 207);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 145, 206);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 146, 59);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 147, 227);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 148, 47);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 149, 16);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 150, 58);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 151, 17);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 152, 182);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 153, 189);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 154, 28);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 155, 42);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 156, 223);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 157, 183);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 158, 170);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 159, 213);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 160, 119);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 161, 248);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 162, 152);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 163, 2);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 164, 44);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 165, 154);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 166, 163);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 167, 70);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 168, 221);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 169, 153);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 170, 101);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 171, 155);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 172, 167);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 173, 43);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 174, 172);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 175, 9);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 176, 129);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 177, 22);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 178, 39);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 179, 253);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 180, 19);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 181, 98);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 182, 108);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 183, 110);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 184, 79);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 185, 113);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 186, 224);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 187, 232);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 188, 178);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 189, 185);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 190, 112);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 191, 104);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 192, 218);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 193, 246);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 194, 97);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 195, 228);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 196, 251);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 197, 34);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 198, 242);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 199, 193);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 200, 238);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 201, 210);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 202, 144);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 203, 12);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 204, 191);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 205, 179);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 206, 162);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 207, 241);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 208, 81);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 209, 51);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 210, 145);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 211, 235);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 212, 249);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 213, 14);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 214, 239);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 215, 107);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 216, 49);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 217, 192);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 218, 214);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 219, 31);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 220, 181);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 221, 199);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 222, 106);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 223, 157);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 224, 184);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 225, 84);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 226, 204);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 227, 176);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 228, 115);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 229, 121);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 230, 50);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 231, 45);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 232, 127);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 233, 4);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 234, 150);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 235, 254);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 236, 138);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 237, 236);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 238, 205);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 239, 93);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 240, 222);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 241, 114);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 242, 67);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 243, 29);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 244, 24);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 245, 72);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 246, 243);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 247, 141);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 248, 128);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 249, 195);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 250, 78);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 251, 66);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 252, 215);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 253, 61);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 254, 156);
    spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(P, 255, 180);
}
#line SPY_LINE(464, 480)
void spy_perlin$main(void) {
    spy_perlin$ndarray1$ndarray$0 PERM;
    spy_perlin$ndarray1$ndarray$1 V3_P;
    spy_perlin$ndarray1$ndarray$1 V3_I;
    spy_perlin$ndarray1$ndarray$0 P;
    int32_t i;
    #line SPY_LINE(465, 487)
    spy_perlin$init();
    PERM = spy_perlin$get_PERM();
    V3_P = spy_perlin$get_V3_P();
    V3_I = spy_perlin$get_V3_I();
    P = spy_perlin$get_P();
    spy_builtins$print_i32(spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(PERM, 0));
    #line SPY_LINE(472, 494)
    spy_builtins$print_i32(spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(P, 44));
    spy_builtins$print_f64(spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(V3_I, 6).p->z);
    spy_perlin$seed(44);
    i = 0;
    while (i < 100) {
        spy_perlin$perlin3(1.2 + spy_operator$i32_to_f64(i), 3.4, 5.6);
        i = i + 1;
    }
}
#line SPY_LINE(51, 504)
int32_t spy_perlin$ndarray1$ndarray$0$__GETITEM__$0$getitem$0(spy_perlin$ndarray1$ndarray$0 arr, int32_t i) {
    spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0 ll;
    #line SPY_LINE(52, 507)
    ll = spy_perlin$ndarray1$ndarray$0$__unlift__(arr);
    if (i >= ll.p->length){
        spy_builtins$print_str(&SPY_g_str0 /* 'IndexError' */);
    }
    return spy_unsafe$ptr__builtins$i32$load(ll.p->items, i);
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(63, 515)
void spy_perlin$ndarray1$ndarray$0$__SETITEM__$0$setitem$0(spy_perlin$ndarray1$ndarray$0 arr, int32_t i, int32_t v) {
    spy_unsafe$ptr__perlin$ArrayData$_ArrayData$0 ll;
    #line SPY_LINE(64, 518)
    ll = spy_perlin$ndarray1$ndarray$0$__unlift__(arr);
    if (i >= ll.p->length){
        spy_builtins$print_str(&SPY_g_str1 /* 'IndexError' */);
    }
    spy_unsafe$ptr__builtins$i32$store(ll.p->items, i, v);
}
#line SPY_LINE(51, 525)
spy_unsafe$ptr__perlin$V3 spy_perlin$ndarray1$ndarray$1$__GETITEM__$0$getitem$0(spy_perlin$ndarray1$ndarray$1 arr, int32_t i) {
    spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1 ll;
    #line SPY_LINE(52, 528)
    ll = spy_perlin$ndarray1$ndarray$1$__unlift__(arr);
    if (i >= ll.p->length){
        spy_builtins$print_str(&SPY_g_str2 /* 'IndexError' */);
    }
    return spy_unsafe$ptr__unsafe$ptr__perlin$V3$load(ll.p->items, i);
    abort(); /* reached the end of the function without a `return` */
}
#line SPY_LINE(63, 536)
void spy_perlin$ndarray1$ndarray$1$__SETITEM__$0$setitem$0(spy_perlin$ndarray1$ndarray$1 arr, int32_t i, spy_unsafe$ptr__perlin$V3 v) {
    spy_unsafe$ptr__perlin$ArrayData$_ArrayData$1 ll;
    #line SPY_LINE(64, 539)
    ll = spy_perlin$ndarray1$ndarray$1$__unlift__(arr);
    if (i >= ll.p->length){
        spy_builtins$print_str(&SPY_g_str3 /* 'IndexError' */);
    }
    spy_unsafe$ptr__unsafe$ptr__perlin$V3$store(ll.p->items, i, v);
}
int main(void) {
    spy_perlin$main();
    return 0;
}
