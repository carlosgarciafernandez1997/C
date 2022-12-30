/*
Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

Examples
replace("Hi!") === "H!!"
replace("!Hi! Hi!") === "!H!! H!!"
replace("aeiou") === "!!!!!"
replace("ABCDE") === "!BCD!"

char *replace(const char *s)
{
    return 0;
}
*/
#include <stdlib.h>
#include <string.h>
int es_vocal(char letra){
  return (letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U' || letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u');
}
char *replace(const char *s)
{
  char *result=calloc(strlen(s)+1,sizeof(char));
  int i;
  memcpy(result, s, (strlen(s)+1) * sizeof(char));
  for(i=0;result[i]!='\0';i++){
    if(es_vocal(result[i])){
      result[i]='!';
    }
  }
  return result;
}