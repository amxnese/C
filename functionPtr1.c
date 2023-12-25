#include <stdio.h>
int add(int a, int b){
  return a + b;
}
int main(){
  int (*ptr)(int, int) = &add;
  int result = (*ptr)(2,4); // * is optional in this case
  printf("sum is: %d",result);
}