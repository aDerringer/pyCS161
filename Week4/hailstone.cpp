/***************************************
*** Name: Andrew Derringer
*** Date: 10/17/2018
*** Description: This program runs a hailstone sequence from a given input integer. Steps is
*** declared and initialized to 0. If conditions are met to end the sequence immediately then
*** the while loop is ignored and the integer value for steps is returned. Otherwise steps is
*** incremented by one for each loop, which test for odds or even numbers and operates
*** accordingly, until conditions are met for the integer value for step to be returned.
***************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

/***************************************
*** Description: hailstone receives one arguement that is put through a hailstone sequence. If the
*** value is even and not equal to one then its purpose is to evaluate within a loop whether the
*** argument is even or odd and operate accordingly. Each evaluation causes a counter to increment
*** by one. Once the arguement value has changed to one, the value assigned to the counter is
*** returned.
***************************************/
int hailstone(int number)
{
     int steps = 0;     //steps initialized to 0 to return 0 if starting input is 1.

     while(number > 0 && number != 1)     //Only runs when arguement is positive and not 1.
     {
          if(number % 2 == 0)     //even numbers
               number /= 2;
          else
               number = (number * 3) + 1;     //odd numbers
          steps++;
     }

     return steps;     //returns only int value held by steps.
}

/*
int main()
{
     int number;

     cout << "Please enter an integer for the hailstone sequence." << endl;
     cin >> number;

     cout << "The hailstone sequence ran through " << hailstone(number) << " steps." << endl;

     return 0;
}
*/
