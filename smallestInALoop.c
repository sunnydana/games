#include<stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;

    printf("Enter a number(no negatives):\n");
    scanf("%d", &num1);
    printf("Enter a number(no negatives)(no repeats):\n");
    scanf("%d", &num2);
    printf("Enter a number(no negatives)(no repeats):\n");
    scanf("%d", &num3);
    printf("Enter a number(no negatives)(no repeats):\n");
    scanf("%d", &num4);
    printf("Enter a number(no negatives)(no repeats):\n");
    scanf("%d", &num5);


    int USER_NUMBERS[5];

    USER_NUMBERS[0] = num1;
    USER_NUMBERS[1] = num2;
    USER_NUMBERS[2] = num3;
    USER_NUMBERS[3] = num4;
    USER_NUMBERS[4] = num5;

    int smallest = USER_NUMBERS[0];

    for(int i = 0; i < 5; i++){
        if(USER_NUMBERS[i] < smallest){
            smallest = USER_NUMBERS[i]; 
        }
    }

    printf("The smallest number is %d ", smallest);

}