'''
main() {
     int totalIntegers,
         inputInteger,
         min,
         max,
         count;

     // asks user how many inputs they want and stores response.
     cout << "How many integers would you like to enter?" << endl;
     cin >> totalIntegers;

     // Assigns first input to variable for further operations.
     cout << "Please enter " << totalIntegers << " integers." << endl;
     cin >> inputInteger;

     // Sets the beginning min and max values to that of the first input.
     // Count begins at 1 to acnowledge that one integer was already input.
     min = inputInteger;
     max = inputInteger;
     count = 1;

     // While loop set to expire at after inputs matches users specification.
     // When any input exceeds current max, max is reassigned to it. Also for min.
     while (count < totalIntegers)
     {
          cin >>  inputInteger;

          if (inputInteger > max)
               max = inputInteger;
          else if (inputInteger < min)
               min = inputInteger;

          count += 1;
     }
     // Output of min and max with respective labels.
     cout << "min: " << min << "\n"
          << "max: " << max << endl; 

     return 0;
}
'''

from helperFunctions import validateInt

def extremes():
    listLength = validateInt("Enter the length of your number list:")

    print("Enter {} numbers for your list:\n".format(listLength))
    min = max = validateInt("")

    for i in range(listLength - 1):
        newValue = validateInt("")
        if newValue > max:
            max = newValue
        elif newValue < min:
            min = newValue
    
    print("\nMIN: {}\nMAX: {}\n".format(min, max))

extremes()
