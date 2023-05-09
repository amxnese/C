#include <stdio.h>
#include <stdbool.h>
int fact(int x){
    int num = 1;
    for(int i=2;i<=x;i++){
        num *= i;
    }
    return num;
}
float median(float x,float z){
    float result = (x+z)/2;
    return result;
}
void reverse(int T[],int taille){
    for(int i=0;i<(taille/2);i++){
        int temp = T[i];
        T[i] = T[taille-1];
        T[taille-1] = temp;
        taille--;
    }
}
bool existance(int T[],int num,int taille){
    int test = 0;
    for(int i=0;i<taille;i++){
        if(T[i] == num){
            test++;
            break;
        }
}if(test == 1){
    return true;
}else{
    return false;
    }
}
int max_row(int row,int column,float Tab[row][column]){
    int max_index = 1;
    float max = 0;
    float cur = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cur += Tab[i][j];
        }
        if(cur > max){
            max = cur;
            max_index = i+1;
        }
    }
    return max_index;
}
int main(void){
    //factoriel function
    int num;
    printf("enter the number:  ");
    scanf("%d",&num);
    printf("le factoriel de le nombre donnes est: %d \n",fact(num));

    //median fucion
    printf("entrer les deux nombres pour obtenir le moyenne:  ");
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    printf("le moyenne de les deux nombres donnes est:  %f\n",median(a,b));

    //reverse function
    printf("entrer la taille de le tableau:  ");
    int taille;
    scanf("%d",&taille);
    printf("entrer les valeurs de type entiere de tableau:   ");
    int Tab[taille];
    for(int i=0;i<taille;i++){
        scanf("%d",&Tab[i]);
    }
    reverse(Tab,taille);
    for(int i=0;i<taille;i++){
        printf("Tab[%d] ==> %d\n",i,Tab[i]);
    }

    //existance fuction
    int Tab1[5];
    int num1,taille1;
    printf("entrer le nombre pour afficher l'existence:  ");
    scanf("%d",&num1);
    printf("entrer la taille de le tableau:  ");
    scanf("%d",&taille1);
    existance(Tab1,num1,taille1);

    //max_row fucntion
    int row = 3;
    int column = 4;
    float Tab2[row][column];
    for(int i=0;i<3;i++){
        for(int j=0;j<column;j++){
            Tab2[i][j] = i * j;
        }
    }
    printf("the index of the row with max sum is :  %d",max_row(row,column,Tab2));
}
