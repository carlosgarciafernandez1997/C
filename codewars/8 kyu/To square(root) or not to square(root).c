/*
Write a method, that will get an integer array as parameter and will process every number from this array.

Return a new array with processing every number of the input-array like this:

If the number has an integer square root, take this, otherwise square the number.

Example
[4,3,9,7,2,1] -> [2,9,3,49,4,1]
Notes
The input array will always contain only positive numbers, and will never be empty or null.

int* squareOrSquareRoot(int* array, int length)
{
  return array;
}
*/
#include <math.h>
int* squareOrSquareRoot(int* array, int length)
{
  int i;
  for(i=0;i<length;i++){
    if(sqrt(array[i])==(int)sqrt(array[i])){
      array[i]=sqrt(array[i]);
    }
    else{
      array[i]=array[i]*array[i];
    }
  }
  return array;
}