#include <stdio.h>
int main(void){
    int number;
    do{printf("enter a number between 1 and 7:  ");
        scanf("%d",&number);
        }while(number < 1 || number > 7);
    switch (number){
    case 1:  printf("samedi");   break;
    case 2:  printf("dimanche"); break;
    case 3:  printf("lundi");    break;
    case 4:  printf("mardi");    break;
    case 5:  printf("mercredi"); break;
    case 6:  printf("jeudi");    break;
    case 7:  printf("vendredi"); break;
    default: printf("invalid input please try again");break;
    }
    return 0;
}