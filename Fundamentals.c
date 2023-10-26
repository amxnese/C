// #include <stdio.h>
// int main(void)
// {
//     for (int i = 0; i < 11; i++)
//     {
//         // printf("%i\n",i);
//         if (i % 2 == 0)
//         {
//             printf("%i is even\n",i);
//         }
//         else
//         {
//             printf("%i is odd\n",i);
//         }
//     }
// }

// #include <stdio.h>
// void Increment(int a, int b)
// {
//     if (a == b)
//     {
//         printf("inputs matches");
//     }
//     else if (a != b)
//     {
//         printf("inputs does not match");
//     }
// }
// int main(void)
// {
    // int a = 8;
    // int *p = &a;
    // int **f = &p;
    // int ***t = &f;
    // int x = 8;
    // if (x==a)
    // {
    //     printf("ol");
    // }
    // printf("one is %d and the other is %d\n",a,*p);
    // printf("one is %d and the other is %d\n",*f,p);
    // printf("one is %d and the other is %d\n",***t,&a);
    // ***t = 9;
    // printf("one is %d and the other is %d\n",a,***t);
//     int a = 99;
//     int b = 9;
//     Increment(a,b);
// }

// #include <stdio.h>
// int main(void)
// {
//     int a[] = {111,222,333,444,555};
//     // int *p = arr;
//     // p += 5;
//     printf("%d\n",a[0]);
//     printf("%d\n",*a);
//     printf("%d\n",&a[0]);
//     printf("%d\n",a);
// }

// #include <stdio.h>
// int sum(int x[],int size)
// {
//     int i, total = 0;
//     for (i = 0;i < size;i++)
//     {
//         total += x[i];
//     }
//     return total;
// }
// int main(void)
// {
//     int a[] = {1,2,3,4,5,4,34,23};
//     int size = sizeof(a)/sizeof(a[0]);
//     int final = sum(a,size);
//     printf("sum of elements is %d",final);
// }

// #include <stdio.h>
// int main(void)
// {
//     char C[5];
//     C[0] = 'a';
//     C[1] = 'm';
//     C[2] = 'i';
//     C[3] = 'n';
//     C[4] = '\0';
//     printf("%s",C);
// }

// #include <stdio.h>
// #include <string.h>
// void prt(char *c)
// {
//     while (*c != '\0')
//     {
//         printf("%c",*c);
//         c++;
//     }
// }
// int main()
// {
//     char arr[20] = "hello";
//     prt(arr);
// }

// #include <stdio.h>
// int main(void)
// {
//     int aray[2];
//     aray[0] = 1;
//     aray[1] = 2;
//     int arr[2][2];
//     arr[0][0] = 3;
//     arr[0][1] = 4;
//     arr[1][0] = 5;
//     arr[1][1] = 6;
//     printf("%d\n",*(arr[0]+1));
//     printf("%d\n",*arr);
    // printf("%d",arr);
// }

// #include <stdio.h>
// int main(void)
// {
//     int arr[2][2];
//     arr[0][0] = 23;
//     arr[0][1] = 34;
//     arr[1][0] = 53;
//     arr[1][1] = 65;
//     printf("%d\n",*(*arr+1));
//     printf("%d",**(arr+1));
// }

// #include <stdio.h>
// int main(void)
// {
// int arr[3][4][2] = {{{1, 2},{3, 4},{5, 6},{7, 8}},
//                     {{8, 7},{6, 5},{4, 3},{2, 1}},
//                     {{1, 3},{5, 7},{9, 7},{5, 3}}};
// printf("%d\n",arr[2][3][0]);
// printf("%d\n",*(*(*(arr+2)+3)+1));
// }

// #include <stdio.h>
// int fun(int (*a)[4][2])
// {
//     printf("%d",(a[0][0][0]+a[1][0][0]+a[2][0][0])/2);
// }
// int main(void)
// {
//     int arr[3][4][2] = {{{1, 2},{3, 4},{5, 6},{7, 8}},
//                         {{8, 7},{6, 5},{4, 3},{2, 1}},
//                         {{1, 3},{5, 7},{9, 7},{5, 3}}};
//     int arr1[2][2] = {{6,3},{2,3}};
//     fun(arr);
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int* p = (int*)malloc(8*sizeof(int));
//     for (int n =0;n<8;n++)
//     {
//         p[n] = n+1;
//     }
//     for (int i = 0;i<8;i++)
//     {
//         printf("%d  ",p[i]);
//     }
//     int* b = (int*)realloc(p,16*sizeof(int));

//     // int* p = (int*)realloc(6,sizeof(int));
//     // printf("%d",*p);
//     free(p);
// }

// #include <stdio.h>
// void sum(int a,int b){
//     printf("%d",a+b);
// }
// void display(void (*fptr)(int,int)){
//     fptr(3,2);
// }
// void main()
// {
//     display(sum);
// }

// #include <stdio.h>
// int main(void)
// {
//     char name[] = "amine";
//     printf("my name is %s",name);
//     double x = 4.58589;
//     printf("%d",x);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// int main(void)
// {
//     double num = 3.453;
//     const int x = 9;
//     printf("%f\n",sqrt(x));
//     printf("%f\n",pow(6,3));
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int age;
//     printf("how old are you:   ");
//     scanf("%d",&age);
//     printf("%d , well that's a shocker",age);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     double n = 3.23444444423;
//     printf("%lf",n);
// }
//#include <stdio.h>
//#include <stdlib.h>
//int calc()
//{
//    double num1;
//    char op;
//    double num2;
//    double result;
//    printf("enter a number:   ");
//    scanf("%lf",&num1);
//    printf("enter an operator:   ");
//    scanf(" %c",&op);
//    printf("enter a second number:   ");
//    scanf("%lf",&num2);
//    if(op == '+'){
//        result = num1 + num2;
//    }
//    else if (op == '-'){
//        result = num1 - num2;
//    }
//    else if (op == '/'){
//        result = num1 / num2;
//    }
//    else if (op == '*'){
//        result = num1 * num2;
//    }
//    else{
//        printf("invalid operator");
//    }
//    return result;
//}
//int max(int x,int y)
//    {
//        int result;
//        if(x>y)
//        {
//            result = x;
//        }
//        else
//        {
//            result = y;
//        }
//        return result;
//    }
//double cube(double num)
//{
//    num = num*num*num;
//    return num;
//}
//int main(void)
//{
//    char name[20];
//    printf("enter you name:   ");
//    scanf("%s",name);
//    fgets(name,20,stdin);
//    printf("your name is %s",name);
//    int age;
//    printf("how old are you:   ");
//    scanf("%d",&age);
//    printf("%d, well that's a shocker!!",age);
//    int age = scanf("%d");
//    printf("you are %d years old",age);
//    return 0;
//    int num1;
//    int num2;
//    printf("enter your two numbers below:  \n");
//    scanf("%d %d",&num1,&num2);
//    printf("%d + %d = %d",num1,num2,num1+num2);
//    char color[20];
//    char noun[20]
//    char celebrityF[20];
//    char celebrityL[20];
//    printf("enter a color:  ");
//    scanf("%s",color);
//    printf("enter a noun:  ");
//    scanf("%s",noun);
//    printf("enter a celebrity name:  ");
//    scanf("%s %s",celebrityF,celebrityL);
//    printf("roses are %s\n %s are jokes\n I love %s %s",color,noun,celebrityF,celebrityL);
//    printf("top\n");
//    say_hi("amine";,20);
//    printf("bottom\n");
//    printf("the cube of %d is %f",5,cube(5));

//    printf("%d",max(4,3));
//    printf("%d",calc());
//    char grade = "A";
//    swith(grade)
//    {
//    case 'A':
//        printf("you did great");
//        break;
//    case 'B':
//        printf("you did good");
//        break;
//    }
//
//}
/*
void say_hi(char name[],int age)
{
    printf("hello %s you are %d years old\n",name,age);
}*//*
struct student
{
    char name[20];
    double gpa;
    int age;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(void)
{
//    char gender;
//    printf("please insert your gender, M for male and F for female:   ");
//    scanf("%s",&gender);
//    switch(gender){
//    case 'M':
//        printf("hello mr");
//        break;
//    case 'F':
//        printf("hello mrs");
//        break;
//    }

//    char grade = 'B';
//    switch(grade){
//    case 'A':
//        printf("you did great");
//        break;
//    case 'B':
//        printf("you did good");
//        break;
//    }

//    struct student student1;
//    student1.age = 20;
//    student1.gpa = 3.4;
//    strcpy(student1.name,"amine");
//    printf("%f",student1.gpa);

        /*
        int secret_num = 5;
        int number_given;
        int guess_count = 3;
        printf("guess a number from 1 to 15:   ");
        do{
            scanf("%d",&number_given);
            }while(number_given < 0 || number_given > 15);
        while (number_given != secret_num){
            printf("Wrong Guess,You Have %d Tries Left:  ",guess_count--);
            scanf("%d",&number_given);
            if (guess_count == 0){
                printf("You're Out Of Guesses..");
                break;
            }
            if (number_given == secret_num){
                printf("Correct!!!");
                break;
            }
        }
        */
        
//    int nums[2][4] = {{1,2,3,4},
//                      {5,6,7,8},
//                      };
//
//    for (int i = 0;i<2;i++)
//    {
//        for (int n = 0;n<4;n++)
//        {
//            printf("%d\n",nums[i][n]);
//        }
//    }
//    return 0;
//    FILE* wfptr = fopen("text.txt","w");
//    fprintf(wfptr,"this file has been created using the ide called code::blocks");
//    fclose(wfptr);
//    char line[255];
//    FILE* rfptr = fopen("text.txt","r");
//    fgets(line,255,rfptr);
//    printf("%s",line);
//    fclose(rfptr)
//    int start;
//    int finish;
//    int sum;
//    sum = 0;
//    printf("enter the starting point:  ");
//    scanf("%d",&start);
//    printf("enter the finish point:   ");
//    scanf("%d",&finish);
//    for (start;start<=finish;start++)
//    {
//        sum += start;
//    }
//    printf("%d",sum);
//    int fact(int x)
//    {
//        if (x == 0){
//            return 1;
//        }else{
//        return (x*fact(x-1));
//        }
//    printf("%d",fact(5));
//    }
//    int sum(int num1,int num2)
//        {
//            int result = num1 + num2;
//            return result;
//        }
//    printf("%d",sum(2,4));
//    char alph[5];
//    alph[0] = "a";
//    printf("%c",alph[0]);
//    return 0;
//    int p,n,i,x;
//    scanf("%d",&n);
//    scanf("%d",&p);
//    x = n;
//    for(i=0;i<p-1;i++)
//    {
//        n*=x;
//    }
//    printf("%d",n);
//    return 0;
//    int i,x,n,tab[120];
//    do{
//        scanf("%d",&n);
//    }while(n<=0);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&tab[i]);
//    }
//    x=0;
//    while(x != 200){
//        for(i=0;i+1<n;i++){
//            if(tab[i] < tab[i+1]){
//                int temp = tab[i];
//                tab[i] = tab[i+1];
//                tab[i+1] = temp;
//                x++;
//            }
//        }
//        if(x==0){
//            x=200;
//        }
//        else{
//            x=0;
//        }
//    }
//    for(i=0;i<n;i++){
//        printf("%d\n",tab[i]);
//    }
//    int i,x;
//    i = 0,x = 1;
//    loop : i++,x += 2;
//    if(i<100){
//        goto loop;
//    }
//    printf("%f",x);

//    int i,x;
//    i=1; x=0;
//    loop : x=x+i;i++;
//    if (i<100){
//        goto loop;
//    }
//    printf("%f",x);
//    int x;
//    printf("enter a number");
//    scanf("%d",&x);
//    switch(x){
//        case(1) : printf("One");break;
//        case(2) : printf("Two");break;
//        case(3) : printf("Three");break;
//        case(4) : printf("Four");break;
//        case(5) : printf("Five");break;
//    }
//    for(int i=1;i<7;i++){
//        for(int n = 0;n < i;n++){
//            printf("*");
//        }
//        printf("\n");
//    }
//    int x,z;
//    printf("how many numbers that you'll enter:  ");
//    scanf("%d",&x);
//    int nums[x];
//    for(int i = 0;i<x;i++){
//        printf("enter the #%d number:  ",i+1);
//        scanf("%d",&z);
//        nums[i] = z;
//    }
//    for(int n = 0;n<x;n++){
//        if(n < x-1){
//            printf("%d, ",nums[n]);
//        }
//        else{
//            printf("%d",nums[n]);
//        }
//    }
//    return 0;

/*
    int age;
    do{
        printf("enter an age");
        scanf("%d",&age);
    }while(age > 17 || age < 6);
    switch(age){
        case 6 ... 7:printf("poussin");break;
        case 8 ... 9:printf("pupille");break;
        case 10 ... 11:printf("poupille");break;
        case 12 ... 14:printf("cadet");break;
        case 15 ... 17:printf("junior");break;
    }
*/
/*
    char letter;
    do{
        printf("\nenter a letter:  ");
        scanf("%c",&letter);
    }while((letter<'A' || letter>'Z') && (letter<'a' || letter>'z'));
    switch(letter){
        case 'a' ... 'z':printf("lowercase");break;
        case 'A' ... 'Z':printf("uppercase");break;
        default : printf("something went wrong");
*/
/*
    int p,q;
    printf("enter the value of (p) and (q):  ");
    scanf("%d%d",&p,&q);
    for(int i = 1;i<=p;i++){
        for(int n = 1;n<=q;n++){
            printf("(%d,%d)",i,n);
        }
        printf("\n");
    }
*/
/*
int fact,n,num,i,result;
result = 0;
fact = 1;
printf("enter value of num:  ");
scanf("%d",&num);
for(i = 1;i<=num;i++){
    for(n = 1;n<=i+1;n++){
    fact *= n;
    }
    result += fact;
    fact = 1;
}
printf("your final result is %d",result);
*/
/*
int n,r;
printf("enter the number that you want to reverse:  ");
scanf("%d",&n);
while(n!=0){
    r *= 10;r += n%10;n /= 10;
}
printf("%d",r);
*/
/*
int i,n,first,second,third;
for(i = 100;i<1000;i++){
    n = i;
    first = (n%10);
    n /= 10;
    second = (n%10);
    n /= 10;
    third = (n);
    if (((pow(first,3))+(pow(second,3))+(pow(third,3))) == i){
        printf("%d is a cubic number:  \n",i);
    }
}
*/
/*
char firstname[20];
char lastname[20];
char fullname[40];
printf("enter your first name:  \n");
gets(firstname);
printf("enter your last name:  \n");
gets(lastname);
strcpy(fullname,strcat(firstname,lastname));
printf("your full name is :  ");
puts(fullname);
printf("%d",strcmp(fullname,strcat(firstname,lastname)));
printf("%d",strlen(fullname));
*/
/*
int table1[10] = {2,2,3,3,4,4,5,5};
int length = sizeof(table1)/sizeof(int);
int table2[length];
int cmt = 0;
int counter = 0;
for(int t1 = 0;t1<=length;t1++){
    for(int t2=0;t2<=length;t2++){
        if(table1[t1] == table2[t2]){
            counter++;
        }
    }
    if(counter == 0){
    table2[cmt] = table1[t1];
    cmt++;}
    else{
        counter = 0;
    }
}
for(int i=0;i<10;i++){
    printf("%d  ",table1[i]);
}
printf("\n");
for(int i=0;i<cmt;i++){
    printf("%d  ",table2[i]);
}
*/
/*
int len,i;
char status[1];
i = 0;
printf("enter the length of the word that is to be reversed:  ");
scanf("%d",&len);
char to_be_reversed[len];
char reversed[len];
printf("enter the word that you want to reverse:  ");
scanf("%s",to_be_reversed);
for(len;len>=0;len--){
    reversed[i] = to_be_reversed[len-1];
    i++;
}printf("the normal form:    %s\the reversed form:    %s\nif you've faced a problem please "
        "check whether the length of word that you've entered is valid",to_be_reversed,reversed);
*/
/*
enum bool {true,false};
enum bool var;
var = true;
printf("%d",var);
*/

// write your code here
return 0;
}




