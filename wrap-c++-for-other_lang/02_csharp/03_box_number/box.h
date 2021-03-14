#ifndef BOX_H
#define BOX_H

class Box {
   public:
      Box (int len, int bre, int hei);
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box

      // Member functions declaration
      double getVolume(void);
      void setLength( double len );
      void setBreadth( double bre );
      void setHeight( double hei );
};

#endif

