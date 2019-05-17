/***************************************
 * Name: Andrew Derringer
 * Date: 11/7/2018
 * Description: The class specification file for Class Person. The object
 * holds a string variable for name and a double variable for age. It
 * features a overloaded constructore that receives arguments to initialize
 * each variable and get functions that can reach each respective variable
 * from a particular object.
 * ************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

using std::string;

class Person
{
     private:
          string name;
          double age;
     public:
          Person(string, double);
          string getName();
          double getAge();
};

#endif
