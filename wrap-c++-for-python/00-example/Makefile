CXX=gcc
CXXFLAGS  = -O2 -fPIC -c 
SWIGFLAGS = -c++ -python -shadow  

# location of the Python header files
PYTHON_VERSION = 3.8
PYTHON_INCLUDE = /usr/include/python$(PYTHON_VERSION)

TARGET = example
OBJS= $(TARGET)_wrap.o

_$(TARGET).so: $(OBJS)
	$(CXX) -shared  $(OBJS) -o _$(TARGET).so
 
$(TARGET)_wrap.o: $(TARGET)_wrap.cxx
	$(CXX) $(CXXFLAGS) $(TARGET)_wrap.cxx -I $(PYTHON_INCLUDE) 

$(TARGET)_wrap.cxx : $(TARGET).i 
	swig $(SWIGFLAGS) $(TARGET).i 

clean :
	rm -rf *.o  *.so $(TARGET)_wrap.cxx $(TARGET).py *.pyc 

.PHONEY : clean 


# swig -c++ -python example.i
# g++  -O2 -fPIC -c example_wrap.cxx -I /usr/include/python2.7  # for python2
# g++  -O2 -fPIC -c example_wrap.cxx -I /usr/include/python3.6  # for python3
# g++  -shared  example_wrap.o -o _example.so
