/*
Your task is to sum the differences between consecutive pairs in the array in descending order.

Example
[2, 1, 10]  -->  9
In descending order: [10, 2, 1]

Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

If the array is empty or the array has only one element the result
should be 0 (Nothing in Haskell, None in Rust).

#include <stddef.h>

int diffsum(const int *arr, size_t n)
{
    return 0;
}
*/
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
int int_desc_cmp (const void *a, const void *b) { return (*(int*)b - *(int*)a); }

int diffsum(const int *arr, size_t n)
{
  int *result = calloc(n,sizeof(int));
  memcpy(result, arr, n * sizeof(int));
  qsort(result, n, sizeof(int), int_desc_cmp);
  return result[0]-result[n-1];
}