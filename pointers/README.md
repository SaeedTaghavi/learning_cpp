# Understanding pointers in c/c++.

Before one can understand how pointers work, it is necessary to understand how variables are stored and accessed in programs. 
every variable has 2 parts to it:
1. the memory address where the data is stored;
2. the value of the data stored.

The memory address is often referred to as the *lvalue* of a variable, and the value of the data stored is referred to as the *rvalue* (*l* and *r* meaning *left* and *right*).
consider the statement:
```c++
int x = 10;
```
internally, the program associates a memory address with the variable x. In this case, let's assume that the program assigns x to reside at the address 1001 (not a realistic address, but chosen for simplicity). Therefore, the lvalue (memory address) of x is 1001, and the rvalue (data value) of x is 10.

The rvalue is accessed by simply using the variable "x". In order to access the lvalue, the "address of" operator ('&') is needed. The expression '&x' is read as "the address of x".

| Expression | Value |
| --- | --- |
| x | 10 |
| &x | 1001 |

The value stored in x can be changed at any time (e.g. x = 20), but the address of x (&x) can never be changed.
A pointer is simply a variable that can be used to modify another variable. It does this by having a memory address for its rvalue. That is, it points to another location in memory.
Creating a pointer to “x” is done as follows:
```c++
int* xptr = &x;
```
The “int*” tells the compiler that we are creating a pointer to an integer value. The “= &x” part tells the compiler that we are assigning the address of x to the rvalue of xptr. Thus, we are telling the compiler that xptr “points to” x.

Assuming that xptr is assigned to a memory address of 1002, then the program’s memory might look like this:

| Variable | lvalue | rvalue |
| --- | --- | --- |
| x | 1001 | 10 |
| xptr | 1002 | 1001 |

The next piece of the puzzle is the "indirection operator" (‘*’), which is used as follows:

```c++
int y = *xptr;
```

The indirection operator tells the program to interpret the rvalue of `xptr` as a memory address rather than a data value. That is, the program looks for the data value (10) stored at the address provided by xptr (1001).
Putting it all together:

| Expression | Value |
| --- | --- |
| x | 10 |
| &x | 1001 |
| xptr | 1001 |
| &xptr | 1002 |
| *xptr | 10 |

Now that the concepts have been explained, here is some code to demonstrate the power of pointers:

```c++
int x = 10;
int *xptr = &x;

printf("x = %d\n", x);
printf("&x = %d\n", &x);        
printf("xptr = %d\n", xptr);
printf("*xptr = %d\n", *xptr);

*xptr = 20;

printf("x = %d\n", x);
printf("*xptr = %d\n", *xptr);
```

For output you would see (Note: the memory address will be different each time):

```bash
x = 10
&x = 3537176
xptr = 3537176
*xptr = 10
x = 20
*xptr = 20
```

Notice how assigning a value to ‘*xptr’ changed the value of ‘x’. This is because ‘*xptr’ and ‘x’ refer to the same location in memory, as evidenced by ‘&x’ and ‘xptr’ having the same value.





