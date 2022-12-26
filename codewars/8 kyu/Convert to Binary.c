/*
Given a non-negative integer n, write a function to_binary/ToBinary which returns that number in a binary format.

Example:

to_binary(1)  should return 1
to_binary(5)  should return 101
to_binary(11) should return 1011

unsigned long long to_binary(unsigned short num)
{
    return 0ull;
}
*/
unsigned long long to_binary(unsigned short num)
{
  unsigned long long sum=0,aux=1;
  if(num!=0){
    while(num>0){
      sum=sum+(num%2)*aux;
      aux=aux*10;
      num=num/2;
    }
  }
  return sum;
}