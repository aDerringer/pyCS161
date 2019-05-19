##########################################################################
# Author: Andrew Derringer
# Program: Calculate Fall Distance
# Last Modified: 5/12/2019
# Description:
#       Overview:   User enters time an object was falling and distance is
#                   computed and returned.
#       Inputs:     Object fall time.
#       Outputs:    Object fall distance.
##########################################################################

from helperFunctions import GRAVITY
from helperFunctions import toThePower
from helperFunctions import validateInt

###
# Function: Fall Distance
# Param: Object fall time
# Pre: None
# Post: Fall distance calculated and returned.
###
def fallDistance(time):

    return (0.5 * (GRAVITY * toThePower(time, 2)))

###
# Function: Calculate Fall
# Param: None
# Pre: None
# Post: Object fall time requested and distance printed.
###
def calculateFall():

    print("Calculating the distance an object fell...")
    fallTime = validateInt("How many seconds was the object falling?: ")

    print("The object traveled {:0.2f} meters.".format(fallDistance(fallTime)))

calculateFall()