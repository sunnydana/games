#include <stdio.h>
#include <stdbool.h>

int main(){
    bool answer = true;

    if(answer){
        printf("Yes!\n");
    }
    else{
        printf("No!\n");
    }

    /* *********************************** */

    int num;
    bool positiveNum;

    printf("Enter a number:\n");
    scanf("%d", &num);

    if(num > 0){
        positiveNum = true;  
        printf("Positive\n");
    }
    else{
        positiveNum = false;
        printf("Not positive\n");
    }


/* **************************************** */

    int num1;
    int num2;
    bool greaterThanTen;

    printf("Enter a number:\n");
    scanf("%d", &num1);

    printf("Enter a number:\n");
    scanf("%d", &num2);

    if(num1 > 10 && num2 > 10){
        greaterThanTen = true;
        printf("Both are big\n");
    }
    else{
        greaterThanTen = false;
        printf("One or both are small\n");
    }

}


    