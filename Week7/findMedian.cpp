/***************************************
 * Name: Andrew Derringer
 * Date: 11/7/2018
 * Description: The function findMedian takes two parameters for an array
 * of integers and an integer indiating size of the array. The array is then
 * sorted and and the median value is return. The calculation is different
 * for even and odd length arrays.
***************************************/

#include <algorithm>
//#include <iostream>

using std::sort;
//using std::cout;

double findMedian(int numbers[], int size)     //Receives an integer array and integer for size
{
     sort(numbers, numbers + size);     //library finction that rearranges integer array small to large

     if(size % 2 == 0)     //if no true median than the average of the 2 nearest ints are averaged
     {    return ((numbers[(size / 2) - 1] + numbers[(size / 2)]) / 2.0);}
     else     //runs if true median exists in odd length arrays
     {    return (numbers[size / 2] / 1.0);}
}

/**
int main()
{
     int array[] = {5,2,3,1,4,9,8,7,6};
     int size = 9;

     cout <<  findMedian(array, size);

     return 0;
}
**/
