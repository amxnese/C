#include <stdio.h>
#include <stdlib.h>
float AreaOfRec(float,float);
int main(void){
    int x=4,y=6;
    float result = AreaOfRec(x,y);
    printf("the breadth is : %f",result);
}
float AreaOfRec(float x,float y){
    float area = x * y;
    return area;
}