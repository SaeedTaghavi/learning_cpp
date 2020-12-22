swig -c++ -python cube.i
# g++  -O2 -fPIC -c example_wrap.cxx -I /usr/include/python2.7  # for python2
g++  -O2 -fPIC -c cube_wrap.cxx -I /usr/include/python3.8  # for python3
g++  -shared  cube_wrap.o -o _cube.so
