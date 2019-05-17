###
# Function: Validate integer input
# Param: string message requesting input
# Pre: None
# Post: Stores string and attempts to conver to int. Loops if error.
# Ret: integer input
# Citation: https://stackoverflow.com/questions/23294658/asking-the-user-for-input-until-they-give-a-valid-response
###
def validateInt(message):
    returnInt = None

    while returnInt == None:
        userInput = input(message)
        try:
            returnInt = int(userInput)
        except ValueError:
            print("\n" + userInput + " is not a number. Please try again.\n")

    return returnInt

def validateFloat(message):
    returnFloat = None

    while returnFloat == None:
        userInput = input(message)
        try:
            returnFloat = float(userInput)
        except ValueError:
            print("\n" + userInput + " is not a number. Please try again.\n")

    return returnFloat

###
# Function: Validate Input
# Param: string message requesting input. Min and Max range values.
# Pre: None
# Post: Stores string and attempts to conver to int. Loops if not int
#       or if out of range.
# Ret: integer input
###
def validateRange(message, min, max):
    
    returnFloat = validateFloat(message)

    while returnFloat < min or returnFloat > max:
        print("\n{} is not within {} and {}. Please try again.\n".format(returnFloat, min, max))
        returnFloat = validateFloat(message)

    return returnFloat

###
# Function: Open File
# Param: string message requesting file name, type of file expected, and use of file.
# Pre: None
# Post: Opens or creates file depending on use input and ensures correct file type
#       based on type passed.
# Ret: Openned file.
###
def openFile(message, type, use):
    
    fileName = input(message)

    if "." in fileName and type not in fileName:
        fileName = fileName[:fileName.index(".")] + type
    elif "." not in fileName:
        fileName += type
    
    file = open(fileName, use)
    return file