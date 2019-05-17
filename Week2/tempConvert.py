"""
/****************************************
** Name: Andrew Derringer
** Date: 101/2018
** Description: This program asks the user for the temperature in celsius
** and returns it converted to fahrenheit.
***************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

main()
{
     double celsius,
            fahrenheit;

     cout << "Please enter a Celsius temperature." << endl;
     cin >> celsius;

     fahrenheit = (9.0/5.0) * celsius + 32;			//fahrenheit is calculated after the celsius variable is assigned by the user

     cout << "The equivalent Fahrenheit temperature is:\n"
          << fahrenheit << endl;

     return 0;
}
"""

##########################################################################
# Author: Andrew Derringer
# Program: Smallest Amount of Change
# Last Modified: 4/29/2019
# Description:
#       Overview:   Dertermines smallest amount of change possible from
#                   user determined amount.
#       Inputs:     
#       Outputs:    average of n integers
##########################################################################

from helperFunctions import validateInt

###
# Function: Convert Temperature
# Param: None
# Pre: None
# Post: Convert and print user input celcius temerature to fahrenheit temperature.
# Ret: None
###
def convertTemperature():
    celcius = validateInt("Please enter a temperature in celsius: ")

    fahrenheit = (9.0/5.0) * celcius + 32

    print("The equivalent temperature to {} celcius is {} fahrenheit.\n".format(celcius, fahrenheit))

#convertTemperature()