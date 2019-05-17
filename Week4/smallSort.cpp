/***************************************
*** Name: Andrew Derringer
*** Date: 10/17/2018
*** Description: This program receives three input integers and sorts them from smallest to
*** largest. The first void function receives the arguments from main and then runs them through
*** an additional void functions that reassigns values of two integers small to big.
***************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

/***************************************
*** Description: sortTwo receives two int reference variables and rearranges them from
*** smallest to largest.
***************************************/
void sortTwo(int& first, int& second)
{
     int temp;

     if (first > second)               //Only runs if the variables arn't already in desired order
     {
          temp = second;
          second = first;
          first = temp;
     }
}

/***************************************
*** Description: smallSort receives three int reference variables from main and passes two
*** of them at a time to sortTwo which rearranges them smallest to largest. After three calls,
*** the variables are reassigned within main from smallest to largest.
***************************************/
void smallSort(int& first, int& second, int& third)
{
     sortTwo(second, third);           //Three calls is necessary to ensure 3 integers are
     sortTwo(first, second);           //ordered correctly.
     sortTwo(second, third);
}

/*
int main()
{
     int first,
         second,
         third;

     cout << "Please enter 3 integers" << endl;
     cin >> first >> second >> third;

     smallSort(first,second,third);

     cout << "The integers you entered from smallest to largest are: \n";
     cout << first << ", " << second << ", " << third << "." << endl;

     return 0;
}
*/
