##########################################################################
# Author: Andrew Derringer
# Object: Taxi Cab ADT
# Last Modified: 5/17/2019
# Description:
#       Overview:   TaxiCab contains variables for x and y coordinates as
#                   well as distance traveled. Users may move the coordinates
#                   of the cab and distance will be tracked.
##########################################################################

class TaxiCab():
    x = 1
    y = 1
    distance = 0

    def __init__(self,xVal, yVal):
        self.setX(xVal)
        self.setY(yVal)

    def setX(self, xVal):
        self.x = xVal

    def setY(self, yVal):
        self.y = yVal
    
    def moveX(self, xVal):
        self.x += xVal

        if xVal > 0:
            self.distance += xVal
        else:
            self.distance += (xVal * -1)

    def moveY(self, yVal):
        self.y += yVal

        if yVal > 0:
            self.distance += yVal
        else:
            self.distance += (yVal * -1)

    def getX(self):
        return self.x

    def getY(self):
        return self.y

    def getDistance(self):
        return self.distance