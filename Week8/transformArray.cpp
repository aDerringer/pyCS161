/***************************************
 * Name: Andrew Derringer
 * Date: 11/14/2018
 * Description: The transformArray function receives the beginning address
 * of an array and its size. It then dynamically allocates an array of
 * twice the length of the original and populates the open elements with
 * the integers in the original array plus one in order. The new array is
 * then assigned to the address of the original array as it was passed
 * by reference, and the allocated space for the new array is deleted.
***************************************/

//#include <iostream>

//using std::cout;
//using std::endl;

//receives a pointer to an array by reference and int for array length
void transformArray(int *& refArray, int arrayLength)
{
     //dynamically allocate a new array that is twice the length of original
     int* newArray = new int[arrayLength * 2];
     
     //Single loop uses array length to assign 2 index positions at once
     for(int i = 0; i < arrayLength; i++)
     {
          newArray[i] = refArray[i];
          newArray[i + arrayLength] = (refArray[i] + 1);
     }
     
     //Memory address associated with refArray variable deleted
     delete [] refArray;
     //Variable assigned to memory address of newArray
     //now the call to delete will delete this address
     refArray = newArray;
}

//Main function for testing the transformArray function.
/*
int main()
{
     int size = 5;
     int* myArray = new int[size];

     myArray[0] = 4;
     myArray[1] = 2;
     myArray[2] = 5;
     myArray[3] = 1;
     myArray[4] = 9;
     myArray[5] = 1;

     cout << "View of original array:" << endl;

     for(int i = 0; i < size; i++)
     {    cout << myArray[i] << endl;}

     transformArray(myArray, size);

     cout << "View of updated array:" << endl;

     for(int i =0; i < (size * 2); i++)
     {    cout << myArray[i] << endl;}

     delete [] myArray;

     return 0;
}
*/
