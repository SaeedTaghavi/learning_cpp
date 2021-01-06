#setup.py file:
from setuptools import setup, Extension
setup(name='myClass',
    version='0.1',
    ext_modules=[Extension('_myClass', sources=['box.cpp','number.cpp','myClass.i'],
                    swig_opts=['-c++'],
                    )],
    headers=['box.h','number.h']
)
