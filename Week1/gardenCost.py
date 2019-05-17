"""
/******************************************************************************* 
** Author:       Andrew Derringer
** Date:         9/24/2018
** Description:  Asks the user for the cost of soil, flower seeds, and fencing
**               to determin the cost of a garden.
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    double costGarden, costSoil, costSeed, costFence;
    cout << "What does the soil cost?" << endl;
    cin >> costSoil;					//Stores cost of soil in variable
    cout << "What do the flower seeds cost?" << endl;
    cin >> costSeed;					//Stores cost of seed in variable
    cout << "What does the fence cost?" << endl;
    cin >> costFence;					//Stores cost of fense in variable
    costGarden = costSoil + costSeed + costFence;	//Calculates the total cost of the garden using previously assigned values
    cout << "The total cost is " << costGarden << endl;

    return 0;
}
"""

##########################################################################
# Author: Andrew Derringer
# Program: Calculate Garden Cost
# Last Modified: 4/29/2019
# Description:
#       Overview:   Asks the user to enter various expenses to begin a
#                   garden and returns total cost.
#       Inputs:     Cost of soil, seeds, and fencing from user.
#       Outputs:    Calculated total cost to begin the garden.
##########################################################################

###
# Function: Validate integer input
# Param: string message requesting input
# Pre: None
# Post: Stores string and attempts to conver to int. Loops if error.
# Ret: integer input
# Citation: https://stackoverflow.com/questions/23294658/asking-the-user-for-input-until-they-give-a-valid-response
###
def inputValidateInt (message):
    returnInt = None

    while returnInt == None:
        userInput = input(message)
        try:
            returnInt = int(userInput)
        except ValueError:
            print("\n\n" + userInput + " is not a number. Please try again.\n\n")

    return returnInt
 
###
# Function: Calculate garden cost
# Param: None
# Pre: None
# Post: Validate and store expenditures for garden. Prints total cost.
# Ret: None
###
def gardenCost ():
    soilCost = inputValidateInt("What does the soil cost?\n")
    seedCost = inputValidateInt("\nWhat do the flower seeds cost?\n")
    fenceCost = inputValidateInt("\nWhat does the fence cost?\n")

    totalCost = soilCost + seedCost + fenceCost

    print("\nThe garden's total cost is: " + str(totalCost) + "\n")

gardenCost()