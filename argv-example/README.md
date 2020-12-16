The most important function of C/C++ is `main()` function. It is mostly defined with a return type of int and without parameters :

```c++
int main() { /* ... */ } 
```

We can also give command-line arguments in C and C++. Command-line arguments are given after the name of the program in command-line shell of Operating Systems.
To pass command line arguments, we typically define `main()` with two arguments : first argument is the number of command line arguments and second is list of command-line arguments.

```c++
int main(int argc, char *argv[]) { /* ... */ }
```
or
```c++
int main(int argc, char **argv) { /* ... */ }
```
