#include <iostream>
int main(int argc,char *argv[] ) {
   if( argc > 1 ) {
     double x;
     x = atof(argv[1]);  // alternative strtod
     x=x+1.5;
   std::cout <<x<<std::endl;
   }
  return 0;
}
