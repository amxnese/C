#include <stdio.h>
// NOTE: x->value is equivalent to (*x).value
typedef struct pc{
  int ram;
  int rom;
  char *cpu;
}pc;
int main(){
  pc pc1 = {8, 128, "i511"};
  pc *ptr = &pc1;
  printf("ram is %d, rom is %d, cpu is %s", pc1.ram, (*ptr).rom, ptr->cpu);
}