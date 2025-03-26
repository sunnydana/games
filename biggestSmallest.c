#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;

    printf("Enter a number:\n");
    scanf("%d", &num1);

    printf("Enter a number(no repeats):\n");
    scanf("%d", &num2);

    printf("Enter a number(no repeats):\n");
    scanf("%d", &num3);

    printf("Enter a number(no repeats):\n");
    scanf("%d", &num4);

    printf("Enter a number(no repeats):\n");
    scanf("%d", &num5);

    if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){
        printf("The biggest number is %d ", num1);
    }

    if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5){
        printf("The biggest number is %d ", num2);
    }

    if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5){
        printf("The biggest number is %d ", num3);
    }

    if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5){
        printf("The biggest number is %d ", num4);
    }

    if(num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4){
        printf("The biggest number is %d \n", num5);
    }


    if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5){
        printf("The smallest number is %d ", num1);
    }

    if(num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5){
        printf("The smallest number is %d ", num2);
    }

    if(num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5){
        printf("The smallest number is %d ", num3);
    }

    if(num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5){
        printf("The smallest number is %d ", num4);
    }

    if(num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4){
        printf("The smallest number is %d ", num5);
    }


    
}