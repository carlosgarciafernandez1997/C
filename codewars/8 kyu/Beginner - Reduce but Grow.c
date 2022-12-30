/*
Given a non-empty array of integers, return the result of multiplying the values together in order. Example:

[1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24

#include <stddef.h>

int grow(size_t size, const int arr[size]) {
  return 0; //Your code comes here
}
*/
#include <stddef.h>
int grow(size_t size, const int arr[size]) {
  size_t i;
  int result=1;
  for(i=0;i<size;i++){
    result=result*arr[i];
  }
  return result;
}