#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("Hello Vietnam\n");
    char answer[100];
    printf("How's the gabagool?\n");
    scanf("%s", answer);
    printf("Answer: %s\n", answer);
   
   srand(time(0)); 
   int randomNumber = rand();
   char numberAsk[10];
   printf("Type 'number' for random number\n");
   scanf("%s", numberAsk);
   if (strcmp(numberAsk, "number" ) == 0){
    printf("%d\n", randomNumber);
   }


    int number;
    while(1){
    printf("Enter a number:\n");
    scanf("%d", &number);
    if (number < 0){
        printf("The number is negative\n");
    }
    else if (number > 0){
        printf("The number is positive\n");
    }
    else {
        printf("The number is neither positive or negative\n");
        break;
    }
    }

    int numberGuess;
    while(1){
        printf("Guess the number\n");
        scanf("%d", &numberGuess);
        if (numberGuess == 9){
            printf("Correct!");
            break;
        }
    }

    return 0;


}
