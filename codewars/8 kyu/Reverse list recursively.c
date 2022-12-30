/*
Write a function revR which reverses a given list. Try not to cheat and provide a recursive solution.

int* revR (int* array, int n);
*/
void cambio(int *p,int *q){
  *p=*q+*p;
  *q=*p-*q;
  *p=*p-*q;
}
int* revR (int* array, int n){
  int i;
  for(i=0;i<n/2;i++){
    cambio(&array[i],&array[n-i-1]);
  }
  return array;
}