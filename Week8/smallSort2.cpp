/***************************************
 * Name: Andrew Derringer
 * Date: 11/14/2018
 * Description: Void type function that receives three reference variables
 * assigns pointers to their locations, and sorts the variables from
 * lowest to highest using pointer operations.
***************************************/

//#include <iostream>

//using std::cout;
//using std::endl;

//This function receives 2 addresses and uses a holder to help rearrange
//the contents of those addresses into ascending order.
void rearrange(int *optionA, int *optionB)
{
     int holder = 0;

     if(*optionA > *optionB)
     {
          holder = *optionB;
          *optionB = *optionA;
          *optionA = holder;
     }
}


//This function receives the address of 3 integers and places
//two at a time into the void rearrange function to be sorted.
void smallSort2(int *first, int *second, int *third)
{
     rearrange(first, second);     //3 tests necessary for 3 arguments
     rearrange(second, third);
     rearrange(first, second);
}


//testing function
/*
int main()
{
     int first = 14;
     int second = -90;
     int third = 2;

     cout << "The initial  order of integers is " << first;
     cout << " " << second << " " <<  third << endl;

     smallSort2(&first, &second, &third);

     cout << "The updated order of integers is " << first;
     cout << " " << second << " " << third << endl;

     return 0;
}
*/
