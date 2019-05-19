##########################################################################
# Author: Andrew Derringer
# Program: Guess Number
# Last Modified: 4/29/2019
# Description:
#       Overview:   User enters number to be guessed by another user. If
#                   incorrect the user receives hints.
#       Inputs:     Correct number and a series of guesses.
#       Outputs:    Hints for higher or lower and count of numbers guessed
#                   upon completion.
##########################################################################

from helperFunctions import validateInt

###
# Function: Guess number
# Param: None
# Pre: User enters number for another to guess.
# Post: ONce number is correctly guessed a count of number of attempts in printed.
###
def guessNum():

    trueNum = validateInt("Pick a number for another user to guess:")
    guessedNum = validateInt("Guess a number:")
    count = 0

    while (guessedNum != trueNum):
        if (guessedNum > trueNum):
            guessedNum = validateInt("Your guess was too high. Try again:")
        elif ( guessedNum < trueNum):
            guessedNum = validateInt("Your guess was too low. Try again:")
        count += 1

    print("You guessed it! It took you {} tries to get the correct answer of {}.\n".format(count, trueNum))

guessNum()
    
    
