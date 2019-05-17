/***************************************
 * Name: Andrew Derringer
 * Date: 11/7/2018
 * Description: The class implementation file for the Class Person. It defines
 * functions including the overloaded constructor that initializes class
 * variables through arguments, and get functions for both variables assigned
 * to each object.
***************************************/

#include "Person.hpp"

Person::Person(string p, double years)      //overloaded constructor initializes variable to arguments
{
     name = p;
     age = years;
}

string Person::getName()     //retreives variable value for name
{    return name;}

double Person::getAge()     //retreives variable value for age
{    return age;}
