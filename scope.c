#include <stdio.h>
/*
Static variables remains in memory even if it is declared in a block on the 
other hand automatic variables get destroyed after completion of the function
in which it was declared.
*/

int gloabl; // initialized to zero and can be used outside of gloabl.c file
static int Static; // initialized to zero and can't be used outside of gloabl.c 
int main(){
  int var1; // local variable to main function initialized to a garbage value
  static int var2; // static local variable initialized to zero
  printf("%d,  %d,  %d,  %d",gloabl, Static,var2,var1); // 0,   0,   0,   garbage value
  return 0;
}