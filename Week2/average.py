"""
/****************************************
** Author: Andrew Derringer
** Date: 10/1/2018
** Description: This program asks the user for five numbers and then prints
** out the average of those numbers.
****************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
     double number1,
            number2,
            number3,
            number4,
            number5,
            average;

     cout << "Please enter five numbers." << endl;			//Receives 5 numbers
     cin >> number1;
     cin >> number2;
     cin >> number3;
     cin >> number4;
     cin >> number5;

     average = (number1 + number2 + number3 + number4 + number5) / 5;	//sums the 5 numbers submitted and stores in the variable average

     cout << "The average of those numbers is:\n" << average << endl;

    return 0;
}
"""

##########################################################################
# Author: Andrew Derringer
# Program: Average Integers
# Last Modified: 4/29/2019
# Description:
#       Overview:   Asks the user to enter n integers and return average.
#       Inputs:     n integers
#       Outputs:    average of n integers
##########################################################################

from helperFunctions import validateInt

###
# Function: Calculate Average
# Param: n number of integers to put input by user
# Pre: None
# Post: calculate and print average of n integers input.
# Ret: None
###
def calculateAverage(n):
    sum = 0
    print("Please enter {} integers:\n".format(n))
    for x in range(0, n):
        sum += validateInt("Integer {}: ".format(x + 1))

    average = sum / n
    print("\nThe average of numbers entered = {}".format(average))

calculateAverage(3)