/***************************************
***
*** Name: Andrew Derringer
*** Date: 10/17/2018
*** Description: This program uses multiple functions to calculate the 
*** distance traveled by a free falling object, where gravity is a
*** constant, time is an input, and distance traveled is the output.
*** The main function is intentionaly muted for testing after submission.
***
***************************************/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::pow;

/***************************************
*** Description: the fallDistance function receives an arguement that is used for time and
*** contains variables for a gravity constant and distance that outputs to main.
***************************************/
double fallDistance(double time)
{
     const double GRAVITY = 9.8;
     double distance;

     distance = (0.5 * (GRAVITY * pow(time, 2.0)));

     return distance;
}

/***************************************
main()
{
     double time,
            distance;
     cout << "This program tells you how far an object fell\n";
     cout << "How many seconds was the object falling?" << endl;
     cin >> time;

     distance = fallDistance(time);

     cout << "The object traveled " << fallDistance(time)  << " meters." << endl;
     
     return 0;
}
***************************************/
