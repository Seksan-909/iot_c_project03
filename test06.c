#include<stdio.h>

void main(){
    
    int number;
    int i = 1;
    printf("------------------------------\n");
    printf("  Multiplication  \n");
    printf("------------------------------\n");
    printf("Input number : ");
    scanf("%d", &number);
    printf("------------------------------\n");
    while(i <=12)
    do{
        printf("%d x %d = %d\n", i, number, i * number);
        i = i +1 ;

    } while (i<=12);
    
}