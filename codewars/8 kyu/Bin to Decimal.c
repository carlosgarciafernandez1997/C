/*
Complete the function which converts a binary number (given as a string) to a decimal number.

unsigned bin_to_decimal(const char *bin);
*/
#include <string.h>
unsigned bin_to_decimal(const char *bin){
  int i;
  unsigned cont=0,pot=1;
  for(i=strlen(bin)-1;i>=0;i--){
    cont=cont+(bin[i]-'0')*pot;
    pot=pot*2;
  }
  return cont;
}