#include <iostream>
#include <chrono>

using namespace std;

//timer class for measuring execution time of a part of code
class timer 
{
   public:
        std::chrono::time_point<std::chrono::steady_clock> start_time;
        std::chrono::time_point<std::chrono::steady_clock> stop_time;
        std::chrono::duration<double> calc_duration();
        void start();
        void stop();
        void print_duration();
};

//member function definitions
void timer::start()
{
    start_time = std::chrono::steady_clock::now();
}

void timer::stop()
{
    stop_time = std::chrono::steady_clock::now();
}
void timer::print_duration()
{
    std::cout<<"duration is: "<< calc_duration().count()<<std::endl;
}

std::chrono::duration<double> timer::calc_duration()
{
    return stop_time-start_time;
}

//sample class for a box
class Box 
{
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box

      // Member functions declaration
      double getVolume(void);
      void setLength( double len );
      void setBreadth( double bre );
      void setHeight( double hei );
};

// Member functions definitions
double Box::getVolume(void) 
{
   return length * breadth * height;
}

void Box::setLength( double len ) 
{
   length = len;
}
void Box::setBreadth( double bre ) 
{
   breadth = bre;
}
void Box::setHeight( double hei ) 
{
   height = hei;
}

// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   double volume = 0.0;     // Store the volume of a box here

   timer timer1;  		
   timer1.start();		//timer1 starts

   // box 1 specification
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   for (int i = 0; i < 10000000; i++)
   {
       
   }
   
   timer1.stop();		// timer1 stops
   timer1.print_duration();

   
   timer timer2;
   timer2.start();		//timer2 starts
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
   cout << "Volume of Box2 : " << volume <<endl;

   timer2.stop();		//timer 2 stops
   timer2.print_duration();

   return 0;
}
