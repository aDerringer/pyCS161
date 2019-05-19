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