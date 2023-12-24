#include <stdio.h>
/*
extern is Used when a particular file needs to access a variable from 
another file so it won't be defined again as it has been already defined 
in the first file hence there won't be a waste of memory
*/

// Declaration of the global variable from scope.c
extern int global;
extern int Static; // Error

int main() {
    // Access the global variable defined in scope.c
    printf("Value of global in extern.c: %d\n", global);
    return 0;
}
