#include <stdio.h>

int main(){
    int NUMS[5];

    printf("Enter a number:\n");
    scanf("%d",&NUMS[0]);

    printf("Enter a number(no repeats):\n");
    scanf("%d",&NUMS[1]);

    printf("Enter a number(no repeats):\n");
    scanf("%d",&NUMS[2]);

    printf("Enter a number(no repeats:\n)");
    scanf("%d",&NUMS[3]);

    printf("Enter a number(no repeats):\n");
    scanf("%d",&NUMS[4]);

    if(NUMS[0] > NUMS[1] && NUMS[0] > NUMS[2] && NUMS[0] > NUMS[3] && NUMS[0] > NUMS[4]){
        printf("The biggest number is %d \n", NUMS[0]);
    }

    if(NUMS[1] > NUMS[0] && NUMS[1] > NUMS[2] && NUMS[1] > NUMS[3] && NUMS[1] > NUMS[4]){
        printf("The biggest number is %d \n", NUMS[1]);
    }

    if(NUMS[2] > NUMS[0] && NUMS[2] > NUMS[1] && NUMS[2] > NUMS[3] && NUMS[2] > NUMS[4]){
        printf("The biggest number is %d \n", NUMS[2]);
    }

    if(NUMS[3] > NUMS[0] && NUMS[3] > NUMS[1] && NUMS[3] > NUMS[2] && NUMS[3] > NUMS[4]){
        printf("The biggest number is %d \n", NUMS[3]);
    }

    if(NUMS[4] > NUMS[0] && NUMS[4] > NUMS[1] && NUMS[4] > NUMS[2] && NUMS[4] > NUMS[3]){
        printf("The biggest number is %d \n", NUMS[4]);
    }


    if(NUMS[0] < NUMS[1] && NUMS[0] < NUMS[2] && NUMS[0] < NUMS[3] && NUMS[0] < NUMS[4]){
        printf("The smallest number is %d ", NUMS[0]);
    }

    if(NUMS[1] < NUMS[0] && NUMS[1] < NUMS[2] && NUMS[1] < NUMS[3] && NUMS[1] < NUMS[4]){
        printf("The smallest number is %d ", NUMS[1]);
    }

    if(NUMS[2] < NUMS[0] && NUMS[2] < NUMS[1] && NUMS[2] < NUMS[3] && NUMS[2] < NUMS[4]){
        printf("The smallest number is %d ", NUMS[2]);
    }

    if(NUMS[3] < NUMS[0] && NUMS[3] < NUMS[1] && NUMS[3] < NUMS[2] && NUMS[3] < NUMS[4]){
        printf("The smallest number is %d ", NUMS[3]);
    }

    if(NUMS[4] < NUMS[0] && NUMS[4] < NUMS[1] && NUMS[4] < NUMS[2] && NUMS[4] < NUMS[3]){
        printf("The smallest number is %d ", NUMS[4]);
    }




    
}