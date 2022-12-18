/*
Write a function that will check if two given characters are the same case.

If either of the characters is not a letter, return -1
If both characters are the same case, return 1
If both characters are letters, but not the same case, return 0

int same_case (char a, char b)
{
	return 0;
}
*/
int same_case (char a, char b)
{
  int valor;
  if((a>='A' && a<='Z') && (b>='A' && b<='Z') || (a>='a' && a<='z') && (b>='a' && b<='z')){
    return 1;
  }
  else if((a>='A' && a<='Z') && (b>='a' && b<='z') || (a>='a' && a<='z') && (b>='A' && b<='Z')){
    return 0;
  }
  return -1;
}