/*
Write a function to split a string and convert it into an array of words.

Examples (Input ==> Output):
"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]
Words will be separated by exactly one space, without leading or trailing spaces.

There will only be letters and spaces in the input string.

#include <stdlib.h>

size_t count_words (const char *words)
{
// count the number of words
// this function will be used to allocate the right amount of memory so it has to be correct !
	return 0;
}

void words_to_array (const char *words, char *words_array[])
{
// allocate the words on the heap, they will be freed
// write them to the pre-allocated words_array
	words_array[0] = calloc(1, 1);
}
*/
#include <stdlib.h>

size_t count_words (const char *words)
{
  size_t i,count=1;
  if(words[0]=='\0'){
    return 0;
  }
  for(i=0;words[i]!='\0';i++){
    count=count + (words[i]==' ');
  }
  return count;
}

void words_to_array (const char *words, char *words_array[])
{
  size_t i,j=0,k=0;
  words_array[0]=calloc(100,sizeof(char));
  for(i=1;i<count_words(words);i++){
    words_array[i]=calloc(100,sizeof(char));
  }
  for(i=0;words[i]!='\0';i++){
    if(words[i]==' '){
      words_array[j][k]='\0';
      j++;
      k=0;
    }
    else{
      words_array[j][k]=words[i];
      k++;
    }
  }
  words_array[j][k]='\0';
}