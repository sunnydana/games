#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));

    int randomNum = (rand() % 3) + 1; 
    int number;

    while(number != 0){

    printf("Enter '1' for Rock, '2' for Paper, '3' for Scissors, or '0' to quit:\n");
    scanf("%d", &number);

    if(number == 1 && randomNum == 1 || number == 2 && randomNum == 2 || number == 3 && randomNum == 3){
        printf("It's a tie\n");
    }
    else if(number == 1 && randomNum == 2){
        printf("Paper beats Rock. I win!\n");
    }
    else if(number == 2 && randomNum == 1){
        printf("Paper beats Rock. You win!\n");
    }
    else if(number == 1 && randomNum == 3){
        printf("Rock beats Scissors. You win!\n");
    }
    else if(number == 3 && randomNum == 1){
        printf("Rock beats Scissors. I win!\n");
    }
    else if(number == 2 && randomNum == 3){
        printf("Scissors beats Paper. I win!\n");
    }
    else if(number == 3 && randomNum == 2){
        printf("Scissors beats Paper. You win!\n");
    }
    else if(number == 0) {
        break;
    }
    }
    return 0;

}