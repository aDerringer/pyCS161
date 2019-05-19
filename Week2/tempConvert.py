##########################################################################
# Author: Andrew Derringer
# Program: Convert temperature from celcius to fahrenheit
# Last Modified: 5/18/2019
# Description:
#       Overview:   Convert user input temerature in celcius to fahrenheit.
#       Inputs:     User input temperature in celcius.
#       Outputs:    Temperature in celcius.
##########################################################################

from helperFunctions import validateInt

###
# Function: Convert Temperature
# Param: None
# Pre: None
# Post: Convert and print user input celcius temerature to fahrenheit temperature.
# Ret: None
###
def convertTemperature():
    celcius = validateInt("Please enter a temperature in celsius: ")

    fahrenheit = (9.0/5.0) * celcius + 32

    print("The equivalent temperature to {} celcius is {} fahrenheit.\n".format(celcius, fahrenheit))

convertTemperature()