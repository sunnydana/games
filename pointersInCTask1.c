#include <stdio.h>

int main(){
    int num = 10;
    int *ptr;

    printf("Before: %d\n", num);

    ptr = &num;
    *ptr = 20;

    printf("After: %d ", num);

    return 0;
}