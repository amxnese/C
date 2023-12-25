#include <stdio.h>
typedef struct person{
  char *name;
  int age;
  float salary;
}person;
int main(){
  person person1 = {"chris", 32, 12000}; // order matters
  // designated initialization
  person person2 = {.age = 28, .name = "james", .salary = 32000}; // oreder doesn't matter
  printf("name is %s age is %d yo, salary is %.2f\n",person1.name,person1.age,person1.salary);
  printf("name is %s age is %d yo, salary is %.2f\n",person2.name,person2.age,person2.salary);
  /*NOTE:
      person person3;
      person3 = {... , ... , ...}; // this is invalid */
}