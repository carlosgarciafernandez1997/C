/*
In this kata, your job is to return the two distinct highest values in a list. If there're less than
2 unique values, return as many of them, as possible.

The result should also be ordered from highest to lowest.

Examples:

[4, 10, 10, 9]  =>  [10, 9]
[1, 1, 1]  =>  [1]
[]  =>  []

#include <stddef.h>

size_t two_highest (size_t length, const long long array[length], long long result[2])
{
	result[0] = 555; // write to result[]
	result[1] = 444; 

	return 2; // return the count of elements
}
*/
#include <stddef.h>
size_t two_highest (size_t length, const long long array[length], long long result[2])
{
  int i;
  if(length==0){
    return 0;
  }
  else{
    result[0]=array[0];
    for(i=1;i<length;i++){
      if(result[0]<array[i]){
        result[0]=array[i];
      }
    }
    result[1]=array[0];
    for(i=1;i<length;i++){
      if(result[0]==result[1]){
        result[1]=array[i];
      }
      else if(result[0]!=array[i] && result[1]<array[i]){
        result[1]=array[i];
      }
    }
  }
  return 2*(result[0]!=result[1])+(result[0]==result[1]);
}