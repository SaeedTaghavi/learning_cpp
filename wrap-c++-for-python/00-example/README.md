
from `SWIGManual.pdf`:
The best way to illustrate `SWIG` is with a simple example. Consider the following `C` code:
```C
/* File : example.c */
double My_variable = 3.0;
/* Compute factorial of n */
int fact(int n) 
{
	if (n <= 1) return 1;
	else return n*fact(n-1);
}
/* Compute n mod m */
int my_mod(int n, int m) 
{
	return(n % m);
}
```
Suppose that you wanted to access these functions and the global variable My_variable from
Python. We start by making a **SWIG interface** file as shown below (by convention, these files carry a `.i` suffix) :

```
/* File : example.i */
%module example
%{
/* Put headers and other declarations here */
%}
extern double My_variable;
extern int fact(int);
extern int my_mod(int n, int m);
```

The interface file contains ANSI C function prototypes and variable declarations. The `%module`
directive defines the name of the module that will be created by SWIG. The `%{,%}` block provides a location for inserting additional code such as C header files or additional C functions. 

 let's build a module for Python3.8:

 ```sh
swig -python example.i
gcc -c -fPIC example.c example_wrap.c -I /usr/include/python3.8
gcc -shared example_wrap.o -o _example.so
 ```
 
 after doing these steps, you would have an `example.py` file that you can import in a python script and use the functions, and variables.
 
 ```python
 import example

print(example.fact(5))

 ```
 
there are six files in this directory:
```
build.sh  example.c  example.i  Makefile  README.md  test_run.py
```

you can build the wrapper using `Makefile` or `build.sh`, then you can check `test_run.py` to see how to import the C program in python program.


 
