##########################################################################
# Author: Andrew Derringer
# Program: Determine Min and Max
# Last Modified: 4/29/2019
# Description:
#       Overview:   Assesses user input numbers to determine minimum and
#                   maximum values entered.
#       Inputs:     n integers.
#       Outputs:    The maximum and minimum value of n integers.
##########################################################################

from helperFunctions import validateInt

###
# Function: Find extremes
# Param: None
# Pre: User enters n integers of which n is specified by the user.
# Post: Each input is assessed when entered and assigned to min or
#       max if applicable.
###
def extremes():
    listLength = validateInt("Enter the length of your number list:")

    print("Enter {} numbers for your list:\n".format(listLength))
    min = max = validateInt("")

    for i in range(listLength - 1):
        newValue = validateInt("")
        if newValue > max:
            max = newValue
        elif newValue < min:
            min = newValue
    
    print("\nMIN: {}\nMAX: {}\n".format(min, max))

extremes()
