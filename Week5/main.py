##########################################################################
# Author: Andrew Derringer
# Program: Box and Taxicab ADT Demonstrations.
# Last Modified: 5/18/2019
# Description:
#       Overview:   Outputs examples after altering a box and taxicab object.
#       Inputs:     None.
#       Outputs:    Variables and methods for box and taxicab objects.
##########################################################################

from Box import Box
from TaxiCab import TaxiCab

def boxDemonstration():
    myBox = Box(2.5, 5, 7.5)

    print("The box dimensions are h: {}, w: {}, l: {}".format(myBox.getHeight(), myBox.getWidth(), myBox.getLength()))
    print("The volume of the box is {} inches".format(myBox.calcVolume()))
    print("The surface area of the box is {} inches.".format(myBox.calcSurfaceArea()))

boxDemonstration()

def taxiDemonstration():
    newCab = TaxiCab(50, 75)

    print ("\nBeginning Coordinates: x= {} y = {} and distance = {}". format(newCab.getX(), newCab.getY(), newCab.getDistance()))

    newCab.moveX(-25)
    newCab.moveY(75)

    print ("Updated Coordinates: x= {} y = {} and distance = {}". format(newCab.getX(), newCab.getY(), newCab.getDistance()))

taxiDemonstration()