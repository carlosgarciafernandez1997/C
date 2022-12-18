/*
Bob is bored during his physics lessons so he's built himself a toy box to help pass the time.
The box is special because it has the ability to change gravity.

There are some columns of toy cubes in the box arranged in a line.
The i-th column contains a_i cubes. At first, the gravity in the box is pulling the cubes downwards.
When Bob switches the gravity, it begins to pull all the cubes to a certain side of the box, d,
which can be either 'L' or 'R' (left or right).
Below is an example of what a box of cubes might look like before and after switching gravity.

#include <stddef.h>
void flip(char d, const int *array, size_t n, int *result) {

}
*/

#include <stddef.h>
#include <string.h>

void flip(char d, const int *array, size_t n, int *result) {
  size_t i,j;
  memcpy(result, array, n * sizeof(int));
    for(i=0;i<n;i++){
      for(j=0;j<n-1;j++){
        if(result[j]>result[j+1] && d=='R'){
          result[j]=result[j+1]+result[j];
          result[j+1]=result[j]-result[j+1];
          result[j]=result[j]-result[j+1];
        }
        else if(result[j]<result[j+1] && d=='L'){
          result[j]=result[j+1]+result[j];
          result[j+1]=result[j]-result[j+1];
          result[j]=result[j]-result[j+1];
        }
      }
    }
}