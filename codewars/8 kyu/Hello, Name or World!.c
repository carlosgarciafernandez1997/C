/*
Define a method hello that returns "Hello, Name!" to a given name, or says Hello, World! if name is not
given (or passed as an empty String).

Assuming that name is a String and it checks for user typos to return a name with a first capital letter (Xxxx).

Examples:

* With `name` = "john"  => return "Hello, John!"
* With `name` = "aliCE" => return "Hello, Alice!"
* With `name` not given 
  or `name` = ""        => return "Hello, World!"

#include <stdlib.h>

char *hello(const char *name) {

}
*/
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
char *hello(const char *name) {
  char *result=calloc(9+strlen(name),sizeof(char)),*nombre=calloc(1+strlen(name),sizeof(char));
  char *result2=calloc(14,sizeof(char));
  int i;
  memcpy(nombre, name, (strlen(name)+1) * sizeof(char));
  strcpy(result2,"Hello, World!");
  if(name==NULL || name[0]=='\0'){
    return result2;
  }
  else{
    for(i=1;nombre[i]!='\0';i++){
      nombre[i]=tolower(nombre[i]);
    }
    nombre[0]=toupper(nombre[0]);
    nombre[i]='\0';
    sprintf(result,"Hello, %s!",nombre);
    return result;
  }
}