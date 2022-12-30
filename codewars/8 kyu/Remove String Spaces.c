/*
Simple, remove the spaces from the string, then return the resultant string.

For C and Nasm, you must return a new dynamically allocated string.

#include <stdlib.h>

char *no_space(const char *str_in) {

}
*/
#include <stdlib.h>
#include <string.h>
char *no_space(const char *str_in) {
  char *result=calloc(strlen(str_in)+1,sizeof(char));
  int i,j=0;
  for(i=0;str_in[i]!='\0';i++){
    if(str_in[i]!=' '){
      result[j]=str_in[i];
      j++;
    }
  }
  result[j]='\0';
  return result;
}