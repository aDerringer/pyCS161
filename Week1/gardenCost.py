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

from helperFunctions import validateInt
 
###
# Function: Calculate garden cost
# Param: None
# Pre: None
# Post: Validate and store expenditures for garden. Prints total cost.
# Ret: None
###
def gardenCost ():
    soilCost = validateInt("What does the soil cost?: ")
    seedCost = validateInt("What do the flower seeds cost?: ")
    fenceCost = validateInt("What does the fence cost?: ")

    totalCost = soilCost + seedCost + fenceCost

    print("The garden's total cost is: {}\n".format(totalCost))

gardenCost()