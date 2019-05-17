/***************************************
*** Name: Andrew Derringer
*** Date: 10/24/2018
*** Description: Class implementation file for class Box. Associated class specification file 
*** is named Box.hpp and is located in the week5 directory of OSU flip server. This file
*** sets predetermined initialization values for un-passed arguments, sets conditions for
*** accepting arguments, and performs operations to determine the volume and surface area of
*** a box.
***************************************/

#include <iostream>
#include "Box.hpp"

/***************************************
*** Description: initializes values to 1 in cases when an argument isn't provided.
***************************************/
Box::Box()
{
     height = width = length = 1.0;
}

/***************************************
*** Description: Calls subsequent functions to determine if conditions are met to reassign
*** variables to passed arguments.
***************************************/
Box::Box(double h, double w, double l)
{
     setHeight(h);
     setWidth(w);
     setLength(l);
}

/***************************************
Description: Assigns height if conditions are met.
***************************************/
void Box::setHeight(double h)
{
     if(h > 0)
          height = h;
}

/***************************************
*** Description: Assigns width if conditions are met.
***************************************/
void Box::setWidth(double w)
{
     if(w > 0)
          width = w;
}

/***************************************
*** Description: Assigns length if conditions are met.
***************************************/
void Box::setLength(double l)
{
     if(l > 0)
          length = l;
}

/***************************************
*** Description: Calculates volume after variables are assigned.
***************************************/
double Box::calcVolume()
{
     return (height * width * length);
}

/***************************************
Description: Calculates surface area after variables are assigned.
***************************************/
double Box::calcSurfaceArea()
{
    return ((height * width * 2) + (width * length * 2) + (length * height *2));
}
