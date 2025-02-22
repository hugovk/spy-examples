from setuptools import setup

setup(
    name="perlin",
    setup_requires=['cffi'],
    install_requires=['cffi'],
    cffi_modules=["cffi_build.py:ffibuilder"],
)
