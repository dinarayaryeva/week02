#include <stdio.h>

int main(void) {

  int n; //heigh of the tree
  printf("Please, enter heigh of the tree n\n");

  //reading the heigh from the console
  scanf("%d", &n);
  
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