#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int choice;

    while(1){
        printf("Enter '1' for Rock, '2' for Paper, '3' for Scissors. (or 0 to quit)\n");
        scanf("%d", &choice);

        int randomNumber = 1 + rand() % 3;


        if(choice == 0){
            break;
        }

        else if(choice == randomNumber){
            printf("It's a tie. Try again.\n");
        }
        else if(choice == 1 && randomNumber == 2){
            printf("Paper beats rock. I win!\n");
        }
        else if(choice == 2 && randomNumber == 1){
            printf("Paper beats rock. You win!\n");
        }
        else if(choice == 1 && randomNumber == 3){
            printf("Rock beats scissors. You win!\n");
        }
        else if(choice == 3 && randomNumber == 1){
            printf("Rock beats scissors. I win!\n");
        }
        else if(choice == 2 && randomNumber == 3){
            printf("Scissors beats paper. I win!\n");
        }
        else if(choice == 3 && randomNumber == 2){
            printf("Scissors beats paper. You win!\n");
        }
    }

    return 0;
}