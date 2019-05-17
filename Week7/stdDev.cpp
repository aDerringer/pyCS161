/***************************************
 * Name: Andrew Derringer
 * Date: 11/7/2018
 * Description: Standard deviation function receives an array of objects
 * of the class Person. It iterates through the array, using get functions
 * from the class Person to retreive the age variable and apply it to
 * calculate sum for mean and mean for standard deviation. The function
 * also receives an integer for size which is used in for loops and for
 * the standard deviation equation.
***************************************/

#include "Person.hpp"
#include <cmath>
//#include <iostream>

//using std::cout;
using std::pow;
using std::sqrt;

double stdDev(Person ind[], int size)     //receives variable of Person objects
{
     double sum = 0.0;
     double mean;
     double summation = 0.0;
     double standDev;

     for(int i = 0; i < size; i++)
     {     sum += (ind[i].getAge());}

     mean = (sum / size);     //loop to calculate mean used in stdDev formula

     for(int r = 0; r < size; r++)
     {    summation += pow((ind[r].getAge() - mean), 2);}

     standDev = sqrt((summation / size));     //pow and sqrt used from cmath for calculation

     return standDev;
}

/***************************************
 * int main()
{
     const int size = 3;
     class Person p1("k", 20);
     class Person p2("a", 30);
     class Person p3("l", 10);
     Person room[size] = {p1, p2, p3};

     cout << stdDev(room, size);

     return 0;
}
***************************************/
