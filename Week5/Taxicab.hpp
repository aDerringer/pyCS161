/***************************************
*** Name: Andrew Derringer
*** Date: 10/24/2018
*** Description: Class specification file for Class Taxicab. Class implementation file named
*** Taxicab.cpp located in week5 directory of flip OSU server. Class tracks x and y
*** coordinate of a taxi as well as actual  distance traveled.
***************************************/

#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
     private:
          int x;
          int y;
          int distance;
     public:
          Taxicab();     //initializes all variables to zero.
          Taxicab(int, int);     //if arguments are passed for x and y then assigned.
          void moveX(int);     //Both add the absolute value of the argument passed to distance
          void moveY(int);     //traveled and add value as passed to respective coordinate.
          int getXCoord();     //returns x value.
          int getYCoord();     //returns y value.
          int getDistanceTraveled();     //returns distance traveled.
};
#endif
