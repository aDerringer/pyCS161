'''
main() {
     ifstream inputFile;
     ofstream outputFile;
     string chosenFile;
     int fileValue,
         fileSum = 0;

     //Asks user for name of file where data will be imported and assigns it to chosenFile.
     cout << "Please enter your filename." << endl;
     cin >> chosenFile;

     //Open file assigned to chosenFile variable.
     inputFile.open(chosenFile);
   
     //The following code is run only if user input is an accessible file.
     if (inputFile)
     {
           //The following code adds integers to the total sum until end of file mark.
           while (inputFile >> fileValue)
                fileSum += fileValue;

           //Creates in output file.
           outputFile.open("sum.txt");

           //Stores data in output file.
           outputFile << fileSum << endl;

           //Closes the output file.
           outputFile.close();

           cout << "result written to sum.txt" << endl;
     }
     //Output message if file was not accessible.
     else
          cout << "could not access file" << endl;

     //Closes the input file.
     inputFile.close();

     return 0;
}
'''

from helperFunctions import openFile

###
# Function: Sum from File
# Param: None
# Pre: None
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



