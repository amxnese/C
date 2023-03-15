#include <stdio.h>
#include <stdlib.h>
void lire(float Tab[],int size,float val1,float val2);
void print(float Tab[],int size);
int max_value(float Tab[],int size);
int max_value_from(float Tab[],int start,int end);
void exchange(float Tab[],int index1,int index2);
int M;
float val1,val2;
int main(void){
    M = 35;
    do{
        printf("enter the value of M  M>=35:  ");
        scanf("%d",&M);
    }while(M<35);
    float Tab[M];
    do{
        printf("enter the value of val1 and val2 respectively (val1<val2):  ");
        scanf("%f%f",&val1,&val2);
    }while(val1>val2 || val1==val2);
    lire(Tab,M,val1,val2);
    print(Tab,M);
    int max = max_value(Tab,M);
    printf("the maximum value index is:  %d\n",max);
    int max1 = max_value_from(Tab,1,4);
    printf("the maximum value index from the range(%d,%d) is :  %d\n",1,4,max1);
    exchange(Tab,2,4);
    printf("after exchanging values:  \n");
    print(Tab,M);
    return 0;
}
void lire(float Tab[],int size,float val1,float val2){
    for(int i = 0;i<size;i++){
        do{
            printf("enter the value of Tab[%d] (val1<Tab[%d]<val2):  ",i,i);
            scanf("%f",&Tab[i]);
        }while(Tab[i]<val1 || Tab[i]>val2);
    }
}
void print(float Tab[],int size){
    for(int i=0;i<size;i++){
        printf("%f\n",Tab[i]);
    }
}
int max_value(float Tab[],int size){
    int m = 0;
    for(int i=1;i<size;i++){
        if(Tab[m] < Tab[i]){
            m = i;
        }
    }
    return m+1;
}
int max_value_from(float Tab[],int start,int end){
    start--;
    int m = start;
    for(int i=start;i<end;i++){
        if(Tab[m] < Tab[i]){
            m = i;
        }
    }
    return m+1;
}
void exchange(float Tab[],int index1,int index2){
    float temp;
    index1--;
    index2--;
    temp = Tab[index1];
    Tab[index1] = Tab[index2];
    Tab[index2] = temp;
}