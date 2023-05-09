#include <stdio.h>
#include <string.h>
int main(void){
    char str1[20],str2[20];
    printf("enter the first string:  ");
    scanf("%s",&str1);
    printf("enter the second string:  ");
    scanf("%s",&str2);
    int result = strcmp(str1,str2);
    if(!result){
        printf("strings matches");
    }else{
        printf("strings doesn't match");
    }
}