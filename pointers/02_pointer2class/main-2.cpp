#include <iostream>
class B
{
public:
	void Greet( )
	{
		std::cout<<"hello!"<< std::endl;
	}
};


class C 
{ 
public: 
    void DoSomethingWithB( B* b)       // pass as a pointer 
    { 
        b->Greet( ); // will work fine 
    } 
}; 


class A 
{ 
public: 
 B b; // Not caring about visibility or bad class/variable names here 
 C c; 
 B *bb;
 void StartTest( ) 
 { 
      c.DoSomethingWithB( bb); 
 } 
};


int main( )
{
    A mainInstance;
    mainInstance.StartTest();
}
