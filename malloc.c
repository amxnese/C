#include <stdio.h>
#include <stdlib.h>
int main(){
  int *ptr = (int*) malloc(8);
  *ptr = 1;
  printf("%d",*ptr); // 1

  free(ptr);
  ptr = NULL;

  printf("%d",*ptr); // NULL
  return 0;
}