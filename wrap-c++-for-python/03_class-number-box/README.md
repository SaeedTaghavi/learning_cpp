# wrap multiple class in on library

In this example instead of using Makefile, I have used python setuptools.

First of all , when you have multiple classes and you want them in a single library file, you should generate interface file (".i") for all of them, then include them in the main interface file.
In this example there are two classes: `Box`, and `Number`.
Each of them has a header file, a source file and an interface file.

`box.cpp  box.h  box.i`

`number.cpp  number.h  number.i`

The content of each header file is like:

```swig
//file : class.i : interface file for class.h
%module class

%{
#include "class.h"
%}

%include class.h
```


Then, there is a main interface file which is like:

```swig
%module allClasses
%include class1.i
%include class2.i
%include class3.i
```

then using the python setuptools you can build the interface:
```python
python3 setup.py build_ext --inplace
```

now you can use the interface in your python scrips.


## todo
- [ ] find a good folder structure for the projecct
