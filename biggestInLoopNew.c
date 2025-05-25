#include <stdio.h>

int main(){
    int num;
    int biggestNum = 0;
    int i = 0;

    while(i < 5){
        printf("Enter a number:");
        scanf("%d", &num);

        if(num > biggestNum){
            biggestNum = num;
        }
        i++;
    }
    printf("Biggest number: %d", biggestNum);

    return 0;
}

