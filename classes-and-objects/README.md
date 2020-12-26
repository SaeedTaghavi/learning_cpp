# C++ Classes and Objects


Object oriented programming (OOP) is a programming model where code and data are encapsulated into units called objects. Interaction between objects is arranged through subroutines called methods that are object specific. Modularity of objects makes for an easy transferability between different applications. 

A class in C++ is the building block, that leads to Object-Oriented programming. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is a blueprint for creating objects (a particular data structure), providing initial values for state (member variables or attributes), and implementations of behavior (member functions or methods).

The user-defined objects are created using the `class` keyword. The class is a blueprint that defines a nature of a future object. An instance is a specific object created from a particular class. Classes are used to create and manage new objects and support inheritance. Data members are the data variables and member functions are the functions used to manipulate these variables and together these data members and member functions defines the properties and behavior of the objects in a Class.

For Example: Consider the Class of Cars. there may be many cars with different named and brand but all of them will share some common properties like all of them will have a "model", a "color", a number for how many "passengers" it can hold, and "speed". There may be many of these properties, but we just take those we need. Also, all Cars will share some common behavior like all of the can changeSpeed, stop(!) and turn.

## Defining Class and Declaring Objects

A class is defined in C++ using keyword `class` followed by the name of class. The body of class is defined inside the curly brackets and terminated by a semicolon at the end.

```c++
class Car 
{ 
    // Access specifier 
    public: 
  
    // Data Members 
    string model; 
    string color; 
    double speed;
    string orientation;
    int passengers;
    
  
    // Member Functions() 
    void changeSpeed(double v) 
    { 
	speed = v;
    } 
    
    void changeOrientation(const char* newOrientation)
    {
	orientation = newOrientation;
    }
}; 
```


## Declaring Objects:
 When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, you need to create objects.

**Syntax:**

```c++
ClassName ObjectName;
```

## Accessing data members and member functions:

The data members and member functions of class can be accessed using the dot(‘.’) operator with the object. For example if the name of object is `obj` and you want to access the member function with the name `printName()` then you will have to write `obj.printName()` .

## Accessing Data Members
The public data members are also accessed in the same way given however the private data members are not allowed to be accessed directly by the object. Accessing a data member depends solely on the access control of that data member.
This access control is given by *Access modifiers* in C++. There are three access modifiers : public, private and protected.

```c++
// C++ program to demonstrate 
// accessing of data members 

#include <bits/stdc++.h> 
using namespace std; 
class Car 
{ 
    // Access specifier 
    public: 
  
    // Data Members 
    string model; 
    string color; 
    double speed;
    string orientation;
    int passengers;
    
  
    // Member Functions() 
    void changeSpeed(double v) 
    { 
	speed = v;
    } 
    
    void changeOrientation(const char* newOrientation)
    {
	orientation = newOrientation;
    }
}; 

int main() { 

	// Declare an object of class geeks 
	Car car1; 

	// accessing data member 
	car1.model = "BMW"; 

	// accessing member function 
	car1.changeSpeed(20); 
	cout<<car1.speed<<endl;
	return 0; 
} 

```



## Member Functions in Classes

There are 2 ways to define a member function:
1. Inside class definition
2. Outside class definition

To define a member function outside the class definition we have to use the scope resolution `::` operator along with class name and function name.


```c++
// C++ program to demonstrate function  
// declaration outside class 

#include <bits/stdc++.h> 
using namespace std; 
class Car 
{ 
    // Access specifier 
    public: 
  
    // Data Members 
    string model; 
    string color; 
    double speed;
    string orientation;
    int passengers;
    
  
    // Member Functions() 
    void changeSpeed(double v) 
    { 
	speed = v;
    } 
}; 

void Car::changeOrientation(const char* newOrientation)
{
    orientation = newOrientation;
}

int main() { 

	// Declare an object of class geeks 
	Car car1; 

	// accessing data member 
	car1.model = "BMW"; 

	// accessing member function 
	car1.changeSpeed(20); 
	cout<<car1.speed<<endl;
	return 0; 
} 

```
Note that all the member functions defined inside the class definition are by default inline, but you can also make any non-class function inline by using keyword inline with them. Inline functions are actual functions, which are copied everywhere during compilation, like pre-processor macro, so the overhead of function calling is reduced.


## Constructors

Constructors are special class members which are called by the compiler every time an object of that class is instantiated. Constructors have the same name as the class and may be defined inside or outside the class definition.

There are 3 types of constructors:
1. Default constructors
2. Parametrized constructors
3. Copy constructors

```c++
// C++ program to demonstrate constructors 

#include <bits/stdc++.h> 
using namespace std; 
class MyClass 
{ 
	public: 
	int id; 
	
	//Default Constructor 
	Test() 
	{ 
		cout << "Default Constructor called" << endl; 
		id=-1; 
	} 
	
	//Parametrized Constructor 
	Test(int x) 
	{ 
		cout << "Parametrized Constructor called" << endl; 
		id=x; 
	} 
}; 
int main() { 
	
	// obj1 will call Default Constructor 
	Test obj1; 
	cout << "Test id is: " <<obj1.id << endl; 
	
	// obj1 will call Parametrized Constructor 
        Test obj2(21); 
	cout << "Test id is: " <<obj2.id << endl; 
	return 0; 
} 

```

A Copy Constructor creates a new object, which is exact copy of the existing object. The compiler provides a default Copy Constructor to all the classes.
**Syntax:**
```c++
className (className &){}
```

## Destructors

Destructor is another special member function that is called by the compiler when the scope of the object ends.

```c++
// C++ program to explain destructors 

#include <bits/stdc++.h> 
using namespace std; 
class MyClass 
{ 
	public: 
	int id; 
	
	//Definition for Destructor 
	~MyClass() 
	{ 
		cout << "Destructor called for id: " << id <<endl; 
	} 
}; 

int main() 
{ 
	MyClass obj1; 
	obj1.id=7; 
	int i = 0; 
	while ( i < 5 ) 
	{ 
		MyClass obj2; 
		obj2.id=i; 
		i++;		 
	} // Scope for obj2 ends here 

	return 0; 
} // Scope for obj1 ends here 
```

- [ ] more about constructors 
[//]: # ( https://www.geeksforgeeks.org/constructors-c/ )
- [ ] more about destructors
[//]: # ( https://www.geeksforgeeks.org/destructors-c/ )
- [ ] more about Access Modifiers in C++
[//]: ( https://www.geeksforgeeks.org/access-modifiers-in-c/ )
- [ ] Inheritance
[//]: #  ( https://www.geeksforgeeks.org/multiple-inheritance-in-c/ )
