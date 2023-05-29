//a Program That Returns The Distance Between Two 2D Points
#include <stdio.h>
#include <math.h>
struct Point{
    float coor1,coor2;
}point1,point2;
void initialize(struct Point* emp1,struct Point* emp2){
    float x,y;
    printf("enter the coordinates of the point1: ");
    scanf("%f%f",&x,&y);
    emp1->coor1 = x;emp1->coor2 = y;
    printf("enter the coordinates of the point2: ");
    scanf("%f%f",&x,&y);
    emp2->coor1 = x;emp2->coor2 = y;
}
float distance(struct Point x,struct Point y){
    float dist = sqrt(pow(y.coor1-x.coor1,2)+pow(y.coor2-x.coor2,2));
    return dist;
}
int main(void){
    initialize(&point1,&point2);
    float result = distance(point1,point2);
    printf("the distance between point1 and point2 is: %f",result);
}