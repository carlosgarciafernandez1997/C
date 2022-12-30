/*
Remove all exclamation marks from the end of sentence.

Examples
remove("Hi!") === "Hi"
remove("Hi!!!") === "Hi"
remove("!Hi") === "!Hi"
remove("!Hi!") === "!Hi"
remove("Hi! Hi!") === "Hi! Hi"
remove("Hi") === "Hi"

char *remove_marks (const char *str_in, char *str_out)
{
// str_out is as large as str_in
	*str_out = '\0'; // write to str_out
	return str_out; // return it
}
*/
#include <string.h>
char *remove_marks (const char *str_in, char *str_out)
{
  int i,aux=-1;
  for(i=strlen(str_in)-1;i>=0;i--){
    if(aux==-1 && str_in[i]!='!'){
      aux=i+1;
      str_out[i]=str_in[i];
    }
    else if(aux!=-1){
      str_out[i]=str_in[i];
    }
  }
  if(aux==-1){aux=0;}
  str_out[aux]='\0';
	return str_out;
}