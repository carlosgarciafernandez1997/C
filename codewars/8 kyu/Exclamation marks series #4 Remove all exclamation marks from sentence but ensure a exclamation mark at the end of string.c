/*
Remove all exclamation marks from sentence but ensure a exclamation mark at the end of string.
For a beginner kata, you can assume that the input data is always a non empty string, no need to verify it.

Examples
remove("Hi!") === "Hi!"
remove("Hi!!!") === "Hi!"
remove("!Hi") === "Hi!"
remove("!Hi!") === "Hi!"
remove("Hi! Hi!") === "Hi Hi!"
remove("Hi") === "Hi!"

#include <stdlib.h>

char *remove_bang (const char *string)
{
  return calloc(1, 1);
}
*/
#include <stdlib.h>
#include <string.h>
char *remove_bang (const char *string)
{
  char *result=calloc(strlen(string)+2,sizeof(char));
  int i,j=0;
  for(i=0;string[i]!='\0';i++){
    if(string[i]!='!'){
      result[j]=string[i];
      j++;
    }
  }
  result[j]='!';
  result[j+1]='\0';
  return result;
}