#include <stdio.h>

int main(){
    int num;
    int i = 0;

    printf("Enter a number:\n");
    scanf("%d", &num);

    while(1){
        num = num - 1;
        printf("%d\n", num);
        if(num == 1){
            break;
        }
    }

    return 0;
}