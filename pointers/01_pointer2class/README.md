
making a pointer to a class does not call a constructor. `myClass* newClass`  is just a pointer to the type `myClass`. it does not point to any valid object, derefrencing such a pointer in **Undefiend Behavior**.
an undefiend behavior means that your program is invalid and it may seem to work or it may crash or it may show any weird behavior, all safe bets are off. So just because your programs= works does not mean it is safe and it will always work.

to write a valid program you will have to make the pointer to a valid object.
for example:

```C++
my Class obj;
myClass*m = &obj;
```


