/*
Create a function that returns the CSV representation of a two-dimensional numeric array.

Example:

input:
   [[ 0, 1, 2, 3, 4 ],
    [ 10,11,12,13,14 ],
    [ 20,21,22,23,24 ],
    [ 30,31,32,33,34 ]] 
    
output:
     '0,1,2,3,4\n'
    +'10,11,12,13,14\n'
    +'20,21,22,23,24\n'
    +'30,31,32,33,34'
Array's length > 2.
#include <stdlib.h>

char *to_csv_text(size_t rows, size_t cols, const int matrix[rows][cols])
{
    return calloc(1, 1);
}

*/

#include <stdlib.h>
#include <stdio.h>
char *to_csv_text(size_t rows, size_t cols, const int matrix[rows][cols])
{
  char *result=calloc(rows*cols*7, sizeof(char));
  size_t i,j;
  for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
      if(j!=(cols-1)){
        sprintf(result, "%s%d,", result,matrix[i][j]);
      }
      else if(i!=(rows-1)){
        sprintf(result, "%s%d\n", result,matrix[i][j]);
      }
      else{
        sprintf(result, "%s%d", result,matrix[i][j]);
      }
    }
  }
  return result;
}