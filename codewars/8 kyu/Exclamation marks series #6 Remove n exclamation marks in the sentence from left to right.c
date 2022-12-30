/*
Remove n exclamation marks in the sentence from left to right. n is positive integer.

Examples
remove("Hi!",1) === "Hi"
remove("Hi!",100) === "Hi"
remove("Hi!!!",1) === "Hi!!"
remove("Hi!!!",100) === "Hi"
remove("!Hi",1) === "Hi"
remove("!Hi!",1) === "Hi!"
remove("!Hi!",100) === "Hi"
remove("!!!Hi !!hi!!! !hi",1) === "!!Hi !!hi!!! !hi"
remove("!!!Hi !!hi!!! !hi",3) === "Hi !!hi!!! !hi"
remove("!!!Hi !!hi!!! !hi",5) === "Hi hi!!! !hi"
remove("!!!Hi !!hi!!! !hi",100) === "Hi hi hi"

#include <stdlib.h>

char *remove(const char *str_in, int n) {

}
*/
#include <stdlib.h>

char *remove(const char *str_in, int n) {
  char *result=calloc(strlen(str_in)+1,sizeof(char));
  int i,j=0;
  for(i=0;str_in[i]!='\0';i++){
    if(n>0 && str_in[i]=='!'){
      n--;
    }
    else{
      result[j]=str_in[i];
      j++;
    }
  }
  result[j]='\0';
  return result;
}