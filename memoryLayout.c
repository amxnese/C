#include <stdio.h>
/*
MEMORY LAYOUT:
  1) text/Code Segment: contains machine code of the compiled program.
  2) Data Segment:
    a) initialized data: (read only,read and write) global,extern,
    static(both local and global),const global variables.
    b) uninitialized data (bss): (bss-block started by symbol) uninitialized 
    global,static(both local and global), const global variables.
    c) heap.
    d) stack.
*/

static int i; /* static var in the global scope initialized automatically to 
zero but unless it's not initialized manualy even to zero it will be stored 
in bss. */
/* if a variable is stored in bss and then gets initialized it moves to 
initialized data but not vice versa.*/
static int i = 25; /* now i is manualy initialized so it moves to 
the initialized data.*/

static int i; /* as we mentioned this line won't make any changes and i 
will stay in the initialized data but if we manualy initialize i to 0 or
any value in the global scope we will end up with an error.*/

int main(){
  static int i; // local static variable initialized to zero by default
  printf("%d",i); /* when dealing with variables in C, The local 
  variables has higher priority than the global ones hence the 
  output will be 0 */
}
/*
in conclusion:
  The global static i is stored in the initialized data and it's value is 25.
  The local static i is stored in the bss and it's value is 0.
  The global i and the local i are two diffrent variables stored in different
  places and holding different values.
*/