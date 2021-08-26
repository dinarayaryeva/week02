#include <stdio.h>

void printTree(int n){

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

}

void printRectangle(int n){

  //loop for each level
  for (int i = 1 ; i<=n; i++){

    //loop for needed *
    for (int k = 0; k<n/2+1; k++){
      printf("*");
      }
    
    printf("\n");
  }

}

void printTriangle(int n){

//loop for each tree level
  for (int i = 1 ; i<=n; i++){

    if (i<=(n/2+1)){
    //upper part of the triangle
    for (int k = 0; k<i; k++){
      printf("*");
      }
    } else {
      //lower part of the triangle
      for (int k = 0; k<n-i+1; k++){
      printf("*");
      }
    }
    printf("\n");
  }

}

int main(void) {

  int n; //heigh of the figure
  int t;//type index

  printf("Please, choose the figure.\nPrint 0 - for tree, 1 - for rectangle or 2 - for triangle\n");
  scanf("%d", &t);

  //reading the heigh from the console
  printf("Please, enter heigh of the figure\n");
  scanf("%d", &n);

  if (t==0) printTree(n);
  else if (t==1) printRectangle(n);
  else if (t==2) printTriangle(n);

  return 0;
}