#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]); //heigh of the tree

  //reading the heigh from the console
  
  //loop for each tree level
  for (int i = 1 ; i<=(2*n-1); i+=2){

    //loop for spaces before *
    for (int k = 0; k<((2*n-1-i)/2); k++){
      printf(" ");
      }
    
    //loop for needed *
    for (int k = 0; k<i; k++){
      printf("*");
      }
    
    //loop for spaces after*
    for (int k = 0; k<(2*n-1-i)/2; k++){
      printf(" ");
      }
    
    printf("\n");
  }

  return 0;
}