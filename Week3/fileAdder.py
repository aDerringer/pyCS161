##########################################################################
# Author: Andrew Derringer
# Program: Read Input File
# Last Modified: 4/29/2019
# Description:
#       Overview:   Reads integers by line from user specified input file
#                   and passes sum to user specified output file.
#       Inputs:     Name of input file.
#       Outputs:    Sum of numbers to output file.
##########################################################################

from helperFunctions import openFile

###
# Function: Sum from File
# Param: None
# Pre: User specified input file must exist in local directory.
# Post: File openned and if it contains integers they are summed and stored in a file
#       of the user's preference.
###
def sumFromFile():

    sum = 0
    inputFile = openFile("Please enter the file name you wish to open:", ".txt", "r") #located in helper functions

    fileLines = inputFile.readlines() #Assumes that values are stored line by line
    for line in fileLines:
        #If the line holds an integer then add it otherwise add 0.
        try:
            lineValue = int(line)
        except ValueError:
            lineValue = 0
        sum += lineValue
    
    inputFile.close()

    outputFile = openFile("Please enter the file name that will hold the sum:", ".txt", "w+")
    outputFile.write("{}".format(sum))
    outputFile.close()

sumFromFile()



