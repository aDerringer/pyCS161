#include <iostream>
#include "Box.hpp"

using std::cout;
using std::endl;

int main()
{
     Box shape(1.5, 2.5, 3.5);
     
     cout << "Volume is: " << shape.calcVolume() << "\n";
     cout << "Surface Area is: " << shape.calcSurfaceArea() << endl;

     return 0;
}
