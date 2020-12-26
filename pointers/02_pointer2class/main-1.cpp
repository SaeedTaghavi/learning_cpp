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
    void DoSomethingWithB( B& b)     //pass as a reference 
    { 
        b.Greet( ); // will work fine 
    } 
}; 


class A 
{ 
public: 
 B b; // Not caring about visibility or bad class/variable names here 
 C c; 
 void StartTest( ) 
 { 
      c.DoSomethingWithB( b); 
 } 
};


int main( )
{
    A mainInstance;
    mainInstance.StartTest();
}
