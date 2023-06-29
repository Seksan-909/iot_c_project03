#include<stdio.h>

void main(){
    
    int number;
    int i = 1;
    printf("------------------------------\n");
    printf("  Multiplication  \n");
    printf("------------------------------\n");
    printf("Input number : ");
    scanf("%d", &number);
    for (i = 1 ; i <= 12 ; i++){
    printf("%d x %d =%d\n", i , number , i*number);

    }
}    