/*
You are given two interior angles (in degrees) of a triangle.

Write a function to return the 3rd.

Note: only positive integers will be tested.

#include <stddef.h>

typedef unsigned int uint;

void find_multiples (uint n, uint limit, size_t *count, uint multiples[])
{
// fill the multiples[] array and put the number of elements into count
	*count = 0;
}
*/
#include <stddef.h>

typedef unsigned int uint;

void find_multiples (uint n, uint limit, size_t *count, uint multiples[])
{
	uint i,j=0;
  *count = 0;
  for(i=n;i<=limit;i++){
    if(i%n==0){
      (*count)++;
      multiples[j]=i;
      j++;
    }
  }
}