
from distutils.core import setup
from Cython.Build import cythonize

setup(ext_modules = cythonize(
           "rect.pyx",                 # our Cython source
           sources=["Rectangle.cc"],  # additional source file(s)
           language="c++",             # generate C++ code
      ))
