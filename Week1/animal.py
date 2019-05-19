##########################################################################
# Author: Andrew Derringer
# Last Modified: 4/29/2019
# Description:
#       Overview:   Asks the user to enter their favorite animal.
#                   Input is stored as faveAnimal string and printed back
#                   to the user.
##########################################################################

###
# Function: Request and print favorite animal as input by user
# Param: None
# Pre: None
# Post: Stores input from user and prints it back.
###
def getFaveAnimal ():
    faveAnimal = input("Please enter tour favorite animal:\n")
    print("\nYour favorite animal is the " + faveAnimal)

getFaveAnimal()