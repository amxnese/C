#include <stdio.h>
#include <stdbool.h>

void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d -> ",arr[i]);
    }
    printf("\n");
}

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

char* existance(int T[], int num, int taille){
    for(int i = 0; i < taille; i++){
        if(T[i] == num){
            return "exists";
        }
    }
    return "doesn't exist";
}

int max_row(int row, int column, float Tab[][column]){
    int max_index = 1;
    float max = 0;
    for(int i = 0; i < row; i++){
        float cur = 0;
        for(int j = 0; j < column; j++){
            cur += Tab[i][j];
        }
        if(cur > max){
            max = cur;
            max_index = i+1;
        }
        
    }
    return max_index;
}

int main(){
    //factoriel function
    int num;
    printf("enter the number that you want to get its factorial:  ");
    scanf("%d",&num);
    printf("The Factorial of That Number is: %d \n",fact(num));

    //median fucion
    printf("enter two numbers to get their median:  \n");
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    printf("The Median of The Two Numbers is:  %f\n",median(a,b));

    //reverse function
    int arr[] = {1,2,3,4,5};
    int size = 5;
    printf("Array Before Reverse: ");
    printArr(arr, size);

    reverse(arr, size);
    printf("Array After Reverse: ");
    printArr(arr, size);

    // existance fuction
    int Tab1[5] = {1,2,3,4,5};
    int size1 = 5;
    int num_to_check;
    printf("enter the number that you want to check:  ");
    scanf("%d",&num_to_check);
    char* result = existance(Tab1,num_to_check,size1);
    printf("the number you entered: %s\n", result);

    // max_row function
    float Tab2[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    printf("the index of the row with max sum is :  %d",max_row(3,3,Tab2)); // 3
    return 0;
}
