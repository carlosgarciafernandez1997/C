/*
Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...".
Input will always be valid, i.e. no negative integers.

char* count_sheep(int n) {

}
*/
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
char* count_sheep(int n) {
  char *resultado = calloc(n * 15 + 1, sizeof(char));
  char *iteracion = calloc((int) (10+log10(n)), sizeof(char));  
  for(int i = 1; i <= n; i++){
        sprintf(iteracion, "%i sheep...", i);
        strcat(resultado, iteracion);
  }
  return resultado;
}