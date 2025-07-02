#include <stdio.h>

int main(){
    char letter = 'A';
    char *ptr;

    printf("Before: %c \n", letter);

    ptr = &letter;
    *ptr = 'Z';

    printf("After: %c ", letter);

    return 0;
}