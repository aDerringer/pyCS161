/***************************************
 * Name: Andrew Derringer
 * Date: ll/20/2018
 * Description: Point class implementation file. Objects are passed two doubles
 * representing x and y-coordinates, or are passed 0 values by a default
 * constructor. Set and get methods for each coordinate are provided.
***************************************/

#include "Point.hpp"
#include <cmath>

using std::pow;
using std::sqrt;

Point::Point()
{    xCoord = yCoord = 0.0;}



Point::Point(double xInput, double yInput)
{
     setXCoord(xInput);
     setYCoord(yInput);
}



void Point::setXCoord(double xInput)
{    xCoord = xInput;}



void Point::setYCoord(double yInput)
{    yCoord = yInput;}



double Point::getXCoord()
{    return xCoord;}



double Point::getYCoord()
{    return yCoord;}



double Point::distanceTo(class Point inputPoint)
{
     double xLength = inputPoint.getXCoord() - xCoord;
     double yLength = inputPoint.getYCoord() - yCoord;
     return sqrt(pow(xLength, 2) + pow(yLength, 2));
}
