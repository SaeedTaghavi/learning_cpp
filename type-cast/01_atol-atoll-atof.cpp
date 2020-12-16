// CPP program to illustrate 
// working of atol() / atoll() / atof() functions. 
#include<stdlib.h>
#include<iostream>
using namespace std; 

int main() 
{ 
	// atol(): This function converts a C-type string, passed as an argument to function call, to a long integer. 
	// usage :
	// long int atol ( const char * str )

	// char array of numbers 
	char str1[] = "5672345"; 

	// Function calling to convert to a long int 
	long int num1 = atol(str1); 

	cout << "Number is " << num1 << "\n"; 

	// char array of numbers of spaces 
	char str2[] = "10000002 0"; 

	// Function calling to convert to a long int 
	long int num2 = atol(str2); 

	cout << "Number is " << num2 << "\n"; 




	// atoll(): This function converts a C-type string, passed as an argument to function call, to a long long integer. 
	// Syntax:
	// long long int atoll ( const char * str )

	// char array of numbers
	char big_num1[] = "8239206483232728";

	// Function calling to convert to a long int
	long long int numll1 = atoll(big_num1);

	cout << "Number is " << numll1 << "\n";

	// char array of numbers of spaces
	char big_num2[] = "100000 9 1324100";

	// Function calling to convert to a long int
	long long int numll2 = atoll(big_num2);

	cout << "Number is " << numll2 << "\n";


	
	// atof() function: This function converts a C-type string, passed as an argument to function call, to double.
	// Syntax:
	// double atof ( const char * str )

	// char array
	char pi[] = "3.1415926535";

	// Calling function to convert to a double
	double pi_val = atof(pi);

	// prints the double value
	cout << "Value of pi = " << pi_val << "\n";

	// char array
	char acc_g[] = "9.8";

	// Calling function to convert to a double
	double acc_g_val = atof(acc_g);

	// prints the double value
	cout << "Value of acceleration due to gravity = "
		<< acc_g_val << "\n";

	return 0; 
} 

