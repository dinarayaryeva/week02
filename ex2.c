#include <stdio.h>
#include<string.h>

int main(void) {
  printf("Please, enter the string\n");
  //initializing the string buffer
  char str[256];
  fgets(str, 256, stdin);
  //print string in reversed order
  for (int i = strlen(str)-2; i>=0; i--){
   printf("%c", str[i]);
  }
  
  return 0;
}