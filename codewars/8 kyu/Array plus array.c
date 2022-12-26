/*
I'm new to coding and now I want to get the sum of two arrays...
Actually the sum of all their elements. I'll appreciate for your help.

P.S. Each array includes only integer numbers. Output is a number too.

#include <stddef.h>

long arr_plus_arr(const int *a,  const int *b, size_t na, size_t nb)
{
    return 0l;
}
*/
#include <stddef.h>

long arr_plus_arr(const int *a,  const int *b, size_t na, size_t nb)
{
  long sum=0;
  size_t i;
  if(na<nb){
    for(i=0;i<nb;i++){
      if(i<na){
        sum=sum+a[i]+b[i];
      }
      else{
        sum=sum+b[i];
      }
    }
  }
  else{
    for(i=0;i<na;i++){
      if(i<nb){
        sum=sum+a[i]+b[i];
      }
      else{
        sum=sum+a[i];
      }
    }
  }
  return sum;
}