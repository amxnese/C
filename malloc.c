#include <stdio.h>
#include <stdlib.h>
int main(){
  // Allocating 4 bytes in memory and using ptr as a pointer to it
  int *ptr = (int*) malloc(sizeof(int));

  // Checking if the malloc function worked properly
  if (ptr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        exit(1);
  }

  *ptr = 1;
  printf("ptr is pointing to: %d",*ptr); // 1

  // freeing the ptr and setting it to NULL
  free(ptr);
  ptr = NULL;

  printf("%d",*ptr); // NULL
  return 0;
}