swig -c++ -python number.i
# g++  -O2 -fPIC -c example_wrap.cxx -I /usr/include/python2.7  # for python2
g++  -fPIC -c number_wrap.cxx -I /usr/include/python3.8  # for python3
g++ -fPIC -c ./src/number.cxx
g++ -shared  number.o number_wrap.o -o _number.so
