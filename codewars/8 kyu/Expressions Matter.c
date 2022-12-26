/*
Given three integers a ,b ,c, return the largest number obtained after inserting the following
operators and brackets: +, *, ()
In other words , try every combination of a,b,c with [*+()] , and return the Maximum Obtained
(Read the notes for more detail about it)

int expression_matter(int a, int b, int c) {
  return 
}
*/
int int_desc_cmp (const void *a, const void *b) { return (*(int*)b - *(int*)a); }
int expression_matter(int a, int b, int c) {
  int v[6];
  v[0]=a+b+c;
  v[1]=a+b*c;
  v[2]=a*b+c;
  v[3]=a*b*c;
  v[4]=a*(b+c);
  v[5]=(a+b)*c;
  qsort(v, 6, sizeof(int), int_desc_cmp);
  return v[0];
}