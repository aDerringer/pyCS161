/***************************************
*** Name: Andrew Derringer
*** Date: 10/24/2018
*** Description: Header file associated with Class Box named Box.cpp and
*** located in week5 directory on OSU flip server.
***************************************/

#ifndef BOX_HPP
#define BOX_HPP

class Box
{
     private:
          double height;
          double width;
          double length;
     public:
          Box();     //initizalizes all variables to 1.
          Box(double, double, double);     //if value >=0 then variables reassigned.
          void setHeight(double);     //reassigns value of variable if conditions met.
          void setWidth(double);
          void setLength(double);
          double calcVolume();     //uses variables to calculate volume.
          double calcSurfaceArea();     //uses variables to calculate surface area.
};
#endif
