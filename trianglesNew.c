#include <stdio.h>

int main(){
    int n;

    int i = 0;
    int j = 0;

    printf("Enter a positive integer:");
    scanf("%d", &n);

    while(i < n){
        printf("\n");
        i++;

        j = 0;
    while(j < i){
        printf("*");
        j++;
    }
   }
}


/*
amount of rows based on number entered
increases by 1 each line
*/