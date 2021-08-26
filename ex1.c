#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {

  //variable declarations
  int i; 
  float f;
  double d;
  //variable assignments
  i = INT_MAX;
  f = FLT_MAX;
  d = DBL_MAX;
  
  printf("Max integer - %d, it has a size = %lu bytes.\n", i,sizeof(i));
  printf("Max float - %f, it has a size = %lu bytes.\n", f,sizeof(f));
  printf("Max double - %lf, it has a size = %lu bytes.\n", d,sizeof(d));
  
  return 0;
}