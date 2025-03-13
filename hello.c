#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(0));

    int number = (rand() % 10) + 1; 
    int numberGuess;

    printf("Hello! Welcome to Gabagool World\n");

    while(1){
      printf("Enter a number between 1 to 10\n");

      if (scanf("%d", &numberGuess) != 1) {
        printf("Number guesses only!\n");

        while (getchar() != '\n');
        continue;
      }

      if (numberGuess == number){
         printf("Congratulations! You Win!");
         break;
      }
      else {
          printf("Incorrect! Try again Punk\n");
      }
    }

    return 0;
 

}


