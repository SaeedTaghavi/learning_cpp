# using swig to wrap a c++ program for using it in python


You can use your c++ program in a python program using a wrapper class. You can write this wrapper class by yourself, but writing wrapper code by hand is repetitive and boring; then why not have the computer do the easy parts for you?

`SWIG` is a wrapper generator. 

`SWIG` will take in your source files and a (minimal) **interface** specification. t'll produce `Python` proxy classes and `C/C++` code. You compile the C/C++ code into a Python extension library, and then use it just like you would a pure-Python library. Under the hood, the proxy classes SWIG generates handle converting Python types to/from calls to the original C functions. As an added bonus, wrapper generators (SWIG included) can usually create bindings for many other different high-level languages too.
The `swig` command is used to create wrapper code to connect C and C++ code to scripting languages like Perl, Python, etc.
You can read more abou swig [here](http://www.swig.org/) and [here](http://books.gigatux.nl/mirror/pythonprogramming/0596000855_python2-CHP-19-SECT-8.html), and [here](https://github.com/swig/swig).

to install `swig` in ubuntu run:
```sh
sudo apt install swig
```
