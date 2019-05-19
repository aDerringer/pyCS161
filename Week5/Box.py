##########################################################################
# Author: Andrew Derringer
# Object: Box ADT
# Last Modified: 5/17/2019
# Description:
#       Overview:   Box holds variables for height, width, and length of a
#                   box and provides methods to return the volume and
#                   surface area.
##########################################################################

class Box():
    height = 1
    width = 1
    length = 1

    def __init__(self, h, w, l):
        self.setHeight(h)
        self.setWidth(w)
        self.setLength(l)

    def setHeight(self, h):
        if h > 0:
            self.height = h

    def setWidth(self, w):
        if w > 0:
            self.width = w

    def setLength(self, l):
        if l > 0:
            self.length = l

    def getHeight(self):
        return self.height

    def getWidth(self):
        return self.width    
    
    def getLength(self):
        return self.length
        
    def calcVolume(self):
        return (self.height * self.width * self.length)

    def calcSurfaceArea(self):
        return ((self.height * self.width * 2) + (self.width * self.length * 2) + (self.length * self.height * 2))
