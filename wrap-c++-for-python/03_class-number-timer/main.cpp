#include "../include/box.h"
#include "../include/timer.h"

// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   double volume = 0.0;     // Store the volume of a box here
   
   timer timer1;

   //timer1 starts
   timer1.start();

   // box 1 specification
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
   // volume of box 1
   volume = Box1.getVolume();
   std::cout << "Volume of Box1 : " << volume <<std::endl;

   for (int i = 0; i < 10000000; i++)
   {
       
   }
   
   //timer1 stops
   timer1.stop();
   timer1.print_duration();
   

   timer timer2;
   
   //timer2 starts
   timer2.start();
   
   Box Box2;                // Declare Box2 of type Box
   // box 2 specification
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);

    for (int i = 0; i < 10000000; i++)
   {
       
   }
   for (int i = 0; i < 10000000; i++)
   {
       
   }
   for (int i = 0; i < 10000000; i++)
   {
       
   }

   // volume of box 2
   volume = Box2.getVolume();
   std::cout << "Volume of Box2 : " << volume <<std::endl;
   
   //timer2 stops
   timer2.stop();
   timer2.print_duration();

   return 0;
}
