#include <stdio.h>
int main(){
    int N,Somme;
    Somme = 0;
    int MAT[N][N];
    printf("les éléments de la diagonale principale de la matrice MAT est:  ");
    for(int i=0;i<=N;i++){
        Somme += MAT[i][i];
        printf("%d",MAT[i][i]);
    }
    printf("les éléments de la diagonale secondaire est:  ");
    for(int i=N;i>=0;i--){
        printf("%d",MAT[N-i][i]);
    }
    printf("la trace de la matrice MAT est: %d",Somme);
    return 0;
}