#include "box.h"


Box:: Box (int len, int bre, int hei)
{
	setLength(len);
	setBreadth(bre);
	setHeight(hei);
}
// Member functions definitions
double Box::getVolume(void) {
   return length * breadth * height;
}

void Box::setLength( double len ) {
   length = len;
}
void Box::setBreadth( double bre ) {
   breadth = bre;
}

void Box::setHeight( double hei ) {
   height = hei;
}
