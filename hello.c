#include<stdio.h>
#include<string.h>
int main(){
    printf("Hello vietenammmm\n");
    char answer[100];
    printf("How's the gabagool?\n");
    scanf("%s", answer);
    printf("Answer: %s\n", answer);

    int number;
    printf("Enter a number:\n");
    scanf("%d", &number);

    if (number < 0){
        printf("The number is negative");
    }
    else if (number > 0){
        printf("The number is positive");
    }
    else {
        printf("The number is neither positive or negative");
    }


}
