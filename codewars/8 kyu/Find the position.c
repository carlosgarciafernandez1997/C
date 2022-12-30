/*
When provided with a letter, return its position in the alphabet.

Input :: "a"

Ouput :: "Position of alphabet: 1"

char* position(char alphabet)
{
  return "";
}
*/
#include <stdlib.h>
#include <stdio.h>
char* position(char alphabet)
{
  char *result=calloc(25,sizeof(char));
  sprintf(result,"Position of alphabet: %d",alphabet-'a'+1);
  return result;
}