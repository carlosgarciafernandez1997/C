/*
Your task is to find the nearest square number, nearest_sq(n), of a positive integer n.

Goodluck :)

Check my other katas:

Alphabetically ordered

Case-sensitive!

Not prime numbers

int nearest_sq(int n)
{

}
*/
#include <math.h>
int nearest_sq(int n)
{
  int ent=(int)sqrt(n);
  return ent*ent*((sqrt(n)-ent)<=0.5)+(ent+1)*(ent+1)*((sqrt(n)-ent)>0.5);
}