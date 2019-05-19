##########################################################################
# Author: Andrew Derringer
# Program: Smallest Amount of Change
# Last Modified: 4/29/2019
# Description:
#       Overview:   Dertermines smallest amount of change possible from
#                   user determined amount.
#       Inputs:     User input of n integers.
#       Outputs:    average of n integers.
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

consolidateChange()
