#include<stdio.h>

int main() {
    for (int i = 1; i <= 10; i++){
        printf("%d", i);
    }
    printf("\n");

    for (int i = 5; i <= 10; i++){
        printf("%d", i);    
        if (i < 10){
            printf(" - ");
        }
        }

    for (int i = 1; i <= 5; i++){
        printf("\n%s%d", " Dana ", i);
    }
}

