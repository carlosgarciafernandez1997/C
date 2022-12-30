/*
For every good kata idea there seem to be quite a few bad ones!

In this kata you need to check the provided array (x) for good ideas 'good' and bad ideas 'bad'.
If there are one or two good ideas, return 'Publish!', if there are more than 2 return 'I smell a series!'.
If there are no good ideas, as is often the case, return 'Fail!'.

For C: do not dynamically allocate memory, instead return a string literal

#include <stddef.h>

const char *well(size_t n, const char *ideas[n]) {

}
*/
#include <stddef.h>
const char *well(size_t n, const char *ideas[n]) {
  size_t i,cont=0;
  for(i=0;i<n;i++){
    cont=cont+(ideas[i][0]=='g');
  }
  if(cont==0){
    return "Fail!";
  }
  else if(cont>2){
    return "I smell a series!";
  }
  return "Publish!";
}