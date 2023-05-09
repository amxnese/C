#include <stdio.h>
#include <stdbool.h>
int fact(int x){
    int num = 1;
    for(int i=2;i<=x;i++){
        num *= i;
    }
    return num;
}
float moyenne(float x,float z){
    float result = (x+z)/2;
    return result;
}
void inverse(int T[],int taille){
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
int max_line(float **Tab,int line,int collumn){
    int max_index = 0;
    float max = 0;
    float cur = 0;
    for(int i=0;i<line;i++){
        for(int n=0;n<collumn;n++){
            cur += Tab[i][n];
        }
        if(cur > max){
            max = cur;
            max_index = i;
        }
    }
    return max_index;
}
int main(void){
    int num;
    printf("enter the number:  ");
    scanf("%d",&num);
    printf("le factoriel de le nombre donnes est: %d \n",fact(num));

    printf("entrer les deux nombres pour obtenir le moyenne:  ");
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    printf("le moyenne de les deux nombres donnes est:  %f\n",moyenne(a,b));

    printf("entrer la taille de le tableau:  ");
    int taille;
    scanf("%d",&taille);
    printf("entrer les valeurs de type entiere de tableau:   ");
    int Tab[taille];
    for(int i=0;i<taille;i++){
        scanf("%d",&Tab[i]);
    }
    inverse(Tab,taille);
    for(int i=0;i<taille;i++){
        printf("Tab[%d] ==> %d\n",i,Tab[i]);
    }

    int tab[5];
    int num1,taille1;
    printf("entrer le nombre pour afficher l'existence:  ");
    scanf("%d",&num1);
    printf("entrer la taille de le tableau:  ");
    scanf("%d",&taille1);
    existance(tab,num1,taille1);

}