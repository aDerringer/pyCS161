##########################################################################
# Author: Andrew Derringer
# Program: Hailstone Sequence
# Last Modified: 5/12/2019
# Description:
#       Overview:   Classic hailstone sequence calculated starting at user
#                   input integer. Steps to reach 0 reported.
#       Inputs:     Initial integer value.
#       Outputs:    Number of steps until value reaches 0.
##########################################################################

from helperFunctions import validateInt

###
# Function: Hailstone Sequence
# Param: Initial value.
# Pre: None
# Post: Returns sequence steps for the value to reach 0.
###
def hailstone(val):
    steps = 0

    while val > 0 and val != 1:
        if val % 2 == 0:
            val /= 2
        else:
            val = (val * 3) + 1
        steps += 1

    return steps

###
# Function: Calculate Hailstone
# Param: None
# Pre: None
# Post: Prints number of steps for sequence to reach value 0.
###
def calcHailstone():
    steps = hailstone(validateInt("Please enter a number to begin the hailstone sequence: "))
    print("The hailstone sequence took {} steps".format(steps))

calcHailstone()