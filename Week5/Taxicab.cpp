/***************************************
*** Name: Andrew Derringer
*** Date: 10/24/2018
*** Description: Class implementation file for Class Taxicab. Specification file named
*** Taxicab.hpp and located in week5 directory of OSU flip server. These functions initialize
*** variables in cases when no argument is passed, assign arguments to variables, return
*** current location of a taxi using x and y coordinates, and track actual distance traveled.
***************************************/

#include <iostream>
#include <cmath>
#include "Taxicab.hpp"

using std::abs;

/***************************************
*** Description: Initializes value of x, y, and distance to 0 for instances when arguments
*** aren't passed.
***************************************/
Taxicab::Taxicab()
{
     x = y = distance = 0;
}

/***************************************
*** Description: Initializes arguments to x and y value, and initializes distance to 0.
***************************************/
Taxicab::Taxicab(int xValue, int yValue)
{
     x = xValue;
     y = yValue;
     distance = 0;
}

/***************************************
*** Description: Uses addition to change the value of x according to argument passed. Increases the
*** distance traveled by the absolute value of the argument.
***************************************/
void Taxicab::moveX(int xValue)
{
     distance += abs(xValue);
     x += xValue;
}

/***************************************
*** Description: Uses addition to change the value of y according to argument passed. Increases the
*** distance traveled by the absolute value of the argument.
***************************************/
void Taxicab::moveY(int yValue)
{
     distance += abs(yValue);
     y += yValue;
}

/***************************************
*** Description: returns the current value of x.
***************************************/
int Taxicab::getXCoord()
{
     return x;
}

/***************************************
*** Description: returns the current value of y.
***************************************/
int Taxicab::getYCoord()
{
     return y;
}

/***************************************
*** Description: returns the current value of distance.
***************************************/
int Taxicab::getDistanceTraveled()
{
    return distance;
}
