/*
When provided with a number between 0-9, return it in words.

Input :: 1

Output :: "One".

If your language supports it, try using a switch statement.

char* switchItUp(int number)
{
  return "";
}
*/
char* switchItUp(int number)
{
  char *valores[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
  return valores[number];
}