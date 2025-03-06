#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main(){

    srand(time(0));

    int number = rand();
    int numberGuess;

    printf("Hello! Welcome to Gabagool World\n");
    printf("Enter a number between 1 to 100\n");
    scanf("%d", &numberGuess);
    if (numberGuess == number){
        printf("Congratulations! You Win!");
    }
    else {
        printf("Incorrect! Try again Punk\n");
    }

}