/*
Given an array of integers, return a new array with each value doubled.

For example:

[1, 2, 3] --> [2, 4, 6]

#include <stddef.h>

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size);
*/
#include <stddef.h>
int *maps(const int *arr, size_t size){
  size_t i;
  int *result=calloc(size,sizeof(int));
  for(i=0;i<size;i++){
    result[i]=2*arr[i];
  }
  return result;
}