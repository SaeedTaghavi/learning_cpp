CXX=g++
CXXFLAGS  = -c -Wall

EXENAME=myApp
TARGET = main
OBJS= number.o

all: prog

prog:main.o $(OBJS)
	$(CXX) main.o $(OBJS) -o $(EXENAME)

main.o:./src/main.cpp
	$(CXX) $(CXXFLAGS) ./src/main.cpp

number.o: ./src/number.cpp
	$(CXX) $(CXXFLAGS) ./src/number.cpp

clean :
	rm -rf *.o  *.so $(EXENAME) 

.PHONEY : clean 


