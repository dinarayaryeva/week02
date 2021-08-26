#include <stdio.h>

void swap(int* a, int* b){
  int temp = *b;
  *b = *a;
  *a = temp;
}

int main(void) {

  int a, b; //two numbers
  printf("Please, two integer numbers for a and b respectively\n");

  //reading numbers from the console
  scanf("%d", &a);
  scanf("%d", &b);
  
  swap(&a, &b);
  printf("After swapping a = %d and b = %d\n", a, b);
  return 0;
}