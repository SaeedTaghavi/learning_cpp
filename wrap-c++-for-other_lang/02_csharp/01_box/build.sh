swig -csharp example.i
gcc -c -fpic example.c example_wrap.c
gcc -shared example.o example_wrap.o -o libexample.so
#mcs -out:test_run.exe *.cs
mcs test_run.cs *.cs
