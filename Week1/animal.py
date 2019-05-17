"""
Author:       Andrew Derringer
Date:         9/24/2018
Description:  Asks the user for their favorite animal and then prints out
that that is their favorite animal.



#include <iostream>
#include <string>

int main()
{
    std::string faveAnimal;
    std::cout << "Please enter your favorite animal." << std::endl;
    std::cin >> faveAnimal;
    std::cout << "Your favorite animal is the " << faveAnimal;
    std::cout << "." << std::endl;    
    
    return 0;
}
"""

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