'''
main() {
     int number,
         count = 0,
         guess;

     //Asks user to input a number to be guessed. That value assigned to number.
     cout << "Enter the number for the player to guess." << endl;
     cin >> number;

     //fist asked to guess outside following loop.
     cout << "Enter your guess." << endl;

     //do while loop used to ensure that loop iterates at least once and
     //increments the count value. Ends at the end if guess equals number.
     do
     {
          cin >> guess;

          count++;

          //Runs in conditions when the previous guess was too high.
          if (guess > number)
               cout << "Too high - try again." << endl;

          //Runs in conditions when the previous guess was too low.
          else if (guess < number)
               cout << "Too low - try again." << endl;

     }while (guess != number);

     cout << "You guessed it in " << count << " tries." << endl;

     return 0;
}'''

from helperFunctions import validateInt

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
    
    
