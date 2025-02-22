import os
from pathlib import Path

from cffi import FFI

ffibuilder = FFI()

ffibuilder.cdef(
    """
    struct ArrayData {
        int32_t length;
        int32_t capacity;
        double* items;
    };

    void seed(int32_t s);
    void make_height_map(int32_t width, int32_t height);
    void update_height_map(int32_t width, int32_t height, double scale, double z);
    void crossfade_height_map(int32_t width, int32_t height, int32_t crossfade_range);
    struct ArrayData* marching_squares(int32_t width, int32_t height, double sq_threshold);
    """
)

src = """
struct ArrayData {
    int32_t length;
    int32_t capacity;
    double* items;
};

void spy_perlin$seed(int32_t s);
void spy_perlin$make_height_map(int32_t width, int32_t height);
void spy_perlin$update_height_map(int32_t width, int32_t height, double scale, double z);
void spy_perlin$crossfade_height_map(int32_t width, int32_t height, int32_t crossfade_range);
struct ArrayData* spy_perlin$marching_squares(int32_t width, int32_t height, double sq_threshold);

#define seed spy_perlin$seed
#define make_height_map spy_perlin$make_height_map
#define update_height_map spy_perlin$update_height_map
#define crossfade_height_map spy_perlin$crossfade_height_map
#define marching_squares spy_perlin$marching_squares
"""

SPY_ROOT = Path(os.environ["SPY_ROOT"]).absolute()

if "PYODIDE_ABI_VERSION" in os.environ:
    # building for pyodide
    TARGET = "emscripten"
else:
    TARGET = "native"

ffibuilder.set_source(
    "perlin",
    src,
    sources=["perlin.c"],
    libraries=["spy"],
    define_macros=[
        (f"SPY_TARGET_{TARGET.upper()}", None),
        ("SPY_RELEASE", None),
    ],
    include_dirs=[f"{SPY_ROOT}/spy/libspy/include"],
    library_dirs=[f"{SPY_ROOT}/spy/libspy/build/{TARGET}/release"],
    #extra_compile_args = ['-O0', '-g'],
)


if __name__ == "__main__":
    ffibuilder.compile(verbose=True)
