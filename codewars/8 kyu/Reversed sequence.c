/*
Build a function that returns an array of integers from n to 1 where n>0.

Example : n=5 --> [5,4,3,2,1]

#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num)
{
    return NULL;
}
*/
/* Note: allocate memory yourself */

#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num)
{
  unsigned short *result=calloc(num, sizeof(unsigned short)),i;
  for(i=0;i<num;i++){
    result[i]=num-i;
  }
  return result;
}