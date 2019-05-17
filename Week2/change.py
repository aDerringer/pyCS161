"""
/***************************************
** Name: Andrew Derringer
** Date: 10/1/2018
** Description: This program asks the user for an amount of change in
** cents less than a dollar and returns the number of quarters, dimes,
** nickles, and pennies equal to that amount of change in the fewest
** number of coins.
***************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

main()
{
     int cents,
         quarters,
         dimes,
         nickles,
         pennies;

     cout << "Please enter an amount in cents less than a dollar."
          << endl;
     cin >> cents;

     quarters = cents / 25;						//As an integer quarter will equal the largest whole number that fits into cents.
     cents %= 25;							//the modulo converts the value of cents to the remainder after cents original value is divided by 25.
     dimes = cents / 10;						//Now that cents equals the amount of change left after quarts, steps are repeated for dimes, nickles, pennies.
     cents %= 10;
     nickles = cents / 5;
     cents %= 5;
     pennies = cents;							//The value for pennies will be equal to remaining cents > 0 and <1 after the final modulo

     cout << "Your change will be:\n"
          << "Q: " << quarters << endl
          << "D: " << dimes << endl
          << "N: " << nickles << endl
          << "P: " << pennies << endl;

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

from helperFunctions import validateFloatRange
from decimal import Decimal

###
# Function: Consolidate Change
# Param: None
# Pre: None
# Post: Determine the fewest possible coins to produce a user input amount of change.
#       Print the result.
# Ret: None
###
def consolidateChange():
    
    # After input arthmetic is handled in integer values to avoid float point
    # errors from fractions that are not well represented in binary.
    coins = {"Quarters": 25, "Dimes": 10, "Nickels": 5, "Pennies": 1}

    remaining = validateFloatRange("Enter an amount of change less than 1.00\n", 0, 1.00)
    remaining *= 100

    for coinage,amount in coins.items():
        print("{}: {}".format(coinage, int(remaining // amount)))
        remaining %= amount

#consolidateChange()
