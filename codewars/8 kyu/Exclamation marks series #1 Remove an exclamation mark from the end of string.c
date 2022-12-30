/*
Description:
Remove an exclamation mark from the end of a string. For a beginner kata, you can assume that the
input data is always a string, no need to verify it.

Examples
remove("Hi!") == "Hi"
remove("Hi!!!") == "Hi!!"
remove("!Hi") == "!Hi"
remove("!Hi!") == "!Hi"
remove("Hi! Hi!") == "Hi! Hi"
remove("Hi") == "Hi"

char *remove_mark (char *string)
{
	return string;
}
*/
#include <stdlib.h>
#include <string.h>
char *remove_mark (char *string)
{
	int i,aux=-1;
  char *result=calloc(strlen(string)+1,sizeof(char));
  for(i=strlen(string)-1;i>=0;i--){
    if(aux==-1 && string[i]=='!'){
      aux=i;
    }
    else if(aux==-1 && string[i]!='!'){
      result[i]=string[i];
      aux=i+1;
    }
    else{
      result[i]=string[i];
    }
  }
  result[i]='\0';
  strcpy(string,result);
	return string;
}