#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(0));
    int number = (rand() % 10) + 1; 
    int numberGuess;
    int counter = 0;
    int NUMBERGUESSES[100];

    printf("Hello! Welcome to Gabagool World\n");

    while(counter < 100){
      printf("Enter a number between 1 to 10\n");

      if (scanf("%d", &numberGuess) != 1) {
        printf("Number guesses only!\n");

        while (getchar() != '\n');
        continue;
      }

      NUMBERGUESSES[counter] = numberGuess;
      counter++;

      if (numberGuess == number){
         printf("Congratulations! You Win!\n");
         printf("Fuhgeddaboudit, a wise guy's always right-even when he's wrong, he's right.\n");

         printf("Look at these numbers though: ");
         for (int i = 0; i < counter; i++) {
          if (i > 0) {
              printf(", ");
          }
          printf("%d", NUMBERGUESSES[i]);
         }
         
         printf("\nYou tried %d times\n", counter);
         printf("You were all over the place, like a rat!");
         break;
      }
      else {
          printf("Incorrect! Try again Punk\n");
      }
    }

    return 0;
 

}


