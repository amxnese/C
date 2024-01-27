#include <stdio.h>
// Function pointer using typedef
typedef void (*function)(int);
void myFunction(int x){
  printf("Value: %d", x);
}
int main(void){
  function thisFunction = myFunction;
  thisFunction(49); // Value: 49
  return 0;
}