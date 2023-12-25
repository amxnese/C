#include <stdio.h>
#pragma pack(1)
typedef struct abc{
  char a; // one byte   \ 
  char b; // one byte    == 8 bytes, because of the 64 bit processor.
  int c;  // four bytes /
  // but when we use #pragma the size becomes 6 only
}abc;

int main(){
  printf("%d", sizeof(abc));
}