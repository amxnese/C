#include <stdio.h>
void fun1(){
  static int x = 0;
  x++;
  printf("%d",x);
}
int main(){
  fun1(); // 1
  fun1(); // 2
  fun1(); // 3
  return 0;
}