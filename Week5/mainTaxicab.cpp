#include <iostream>
#include "Taxicab.hpp"

using std::cout;
using std::endl;

int main()
{
     Taxicab car(4,1);
     
     cout << "Current x coordinate is " << car.getXCoord() << "\n";
     cout << "Current y coordinate is " << car.getYCoord() << "\n";
     cout << "and current ditance traveled is " << car.getDistanceTraveled() << endl;

     car.moveX(0);
     car.moveY(-11);

     cout << "Now the x coordinate has changed to " << car.getXCoord() << "\n";
     cout << "The y coordinate has changed to " << car.getYCoord() << "\n";
     cout << "and the distance traveled has changed to " << car.getDistanceTraveled() << endl;

     return 0;
}
