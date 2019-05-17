/***************************************
 * Name: Andrew Derringer
 * Date: 11/20/2018
 * Description: LineSegment class specification file. The objects are passed
 * two arguments, both of which are the address of  Point class objects. The
 * two variables will follow the Point class default constructor and be set to
 * (0.0,0.0) if no argument is passed. The class features an overloaded
 * constructor, get and set functions, a lnegth function that uses the
 * distance function from the Pointer class, and a slope function.
***************************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

class LineSegment
{
     private:
          //Both class variables are pointers to Point class objects.
          class Point* endOne;
          class Point* endTwo;
     public:
          //The constructor and set functions receive pointer/address arguments
          LineSegment(class Point*, class Point*);
          void setEnd1(class Point*);
          void setEnd2(class Point*);
          //The get functions return pointers or address data
          class Point* getEnd1();
          class Point* getEnd2();
          double length();
          double slope();
};

#endif
