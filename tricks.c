#include <stdio.h>
int main(){
  /* When we put a zero at the begining of the number we're simply
  asking the compiler to treat it as an octal digit.            */
  int var = 053;
  printf("%d\n" ,var); // 43 in octal

  #define STRING "%s\n"
  #define MACRO "hello world!"
  printf(STRING, MACRO); // ==> printf("%s\n", "hello world!"); ==> hello world!

  int hex = 0x234;
  printf("%x in hex and %d in dec\n", hex,hex); // 234 in hex and 564 in dec

  int a = (1,2,3); // a = right most = 3

  int x = 5;
  int y = sizeof(x++); /*the size is determined from the type of the operand.
  if the type of the operand is a variable length array type, then the 
  operand is evaluated, otherwise, the operand is not evaluated and the
   result is an integer constant. */
  printf("%d  %d",x, y); // 5  4 because x++ is not evaluated

}