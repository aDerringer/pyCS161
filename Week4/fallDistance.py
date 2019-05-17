'''
double fallDistance(double time)
{
     const double GRAVITY = 9.8;
     double distance;

     distance = (0.5 * (GRAVITY * pow(time, 2.0)));

     return distance;
}

/***************************************
main()
{
     double time,
            distance;
     cout << "This program tells you how far an object fell\n";
     cout << "How many seconds was the object falling?" << endl;
     cin >> time;

     distance = fallDistance(time);

     cout << "The object traveled " << fallDistance(time)  << " meters." << endl;
     
     return 0;
}
***************************************/
'''

from helperFunctions import GRAVITY
from helperFunctions import toThePower
from helperFunctions import validateInt

def fallDistance(time):

    return (0.5 * (GRAVITY * toThePower(time, 2)))

def calculateFall():

    print("Calculating the distance an object fell...")
    fallTime = validateInt("How many seconds was the object falling?: ")

    print("The object traveled {:0.2f} meters.".format(fallDistance(fallTime)))

calculateFall()