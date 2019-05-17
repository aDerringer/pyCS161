/***************************************
 * Name: Andrew Derringer
 * Date: 11/20/2018
 * Description: LineSegment class implementation file. The object receives
 * the address of 2 Point objects, or uses default Point objects from
 * the point class default constructor. Get and set functions are pointer
 * class type, while length and slope functions are double type.
***************************************/

#include "LineSegment.hpp"

//The cunstructor receives Point class pointers and passes them to set functions in that form
LineSegment::LineSegment(class Point* endFirst, class Point* endSecond)
{
     setEnd1(endFirst);
     setEnd2(endSecond);
}


//set functions receive pointers and assign them to Point class pointer variables
void LineSegment::setEnd1(class Point* endFirst)
{    endOne = endFirst;}


void LineSegment::setEnd2(class Point* endSecond)
{    endTwo = endSecond;}


//get functions are passed pointer argument and return without alteration
class Point* LineSegment::getEnd1()
{    return endOne;}


class Point* LineSegment::getEnd2()
{    return endTwo;}


//length function performs point class functions on object at pointer address
double LineSegment::length()
{    return (*endOne).distanceTo(*endTwo);}


//Slope function performs point class function on object at passed pointer
//and calculates rise over run to determine slope.
double LineSegment::slope()
{
     double rise = (*endTwo).getYCoord() - (*endOne).getYCoord();
     double run = (*endTwo).getXCoord() - (*endOne).getXCoord();
     return rise / run;
}
