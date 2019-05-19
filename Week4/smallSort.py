##########################################################################
# Author: Andrew Derringer
# Program: Sort List
# Last Modified: 5/16/2019
# Description:
#       Overview:   Implement a heap ADT to store user created array and
#                   sort it in any order.
#       Inputs:     List of integers.
#       Outputs:    List of integers ordered low to high.
##########################################################################
 
from heap import heap
from helperFunctions import validateInt

###
# Function: Sort List
# Param: None
# Pre: Heap instantiated.
# Post: List sorted low to high and printed.
###
def sortList():
    myList = heap([])

    print("This program sorts a list of integers using a heap abstraction.\n")
    length = validateInt("How long would you like your list to be?: ")
    print("Please enter {} integers in any order to fill your list:".format(length))

    for i in range(length):
        myList.appendList(validateInt(""))

    print("The order of your list as entered:")
    myList.printList()

    print("\nYour sorted list:")
    myList.sortHeap()
    myList.printList()

sortList()