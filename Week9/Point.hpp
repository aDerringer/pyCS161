/***************************************
 * Name: Andrew Derringer
 * Date: 11/20/2018
 * Description: Point class specification file. Objects receive two double
 * values representing an x and y-coordinate. Default constructor, get, and
 * set methods included.
***************************************/

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
     private:
          double xCoord;
          double yCoord;
     public:
          Point();
          Point(double, double);
          void setXCoord(double);
          void setYCoord(double);
          double getXCoord();
          double getYCoord();
          double distanceTo(class Point);
};

#endif
