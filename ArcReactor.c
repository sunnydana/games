#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int maximizePower(int num1, int num2, int num3, char mode){
    int biggestNum;
    if(num1 > num2 && num1 > num3 && mode == 'M'){
        biggestNum = num1;
    }
    else if(num2 > num1 && num2 > num3 && mode == 'M'){
        biggestNum = num2;
    }
    else if(num3 > num1 && num3 > num2 && mode == 'M'){
        biggestNum = num3;
    }
    printf("You selected: Maximize Power\n");
    printf("Result: The Arc Reactor will use the highest energy level: %d \n", biggestNum);
    printf("Power successfully calibrated. Ready for flight.\n");

    return 0;
}


int limitPower(int num1, int num2, int num3, char mode){
    int smallestNum;
    if(num1 < num2 && num1 < num3 && mode == 'L'){
        smallestNum = num1;
    }
    else if(num2 < num1 && num2 < num3 && mode == 'L'){
        smallestNum = num2;
    }
    else if(num3 < num1 && num3 < num2 && mode == 'L'){
        smallestNum = num3;
    }
    printf("You selected: Limit Power\n");
    printf("Result: The Arc Reactor will use the limited power energy level: %d \n", smallestNum);
    printf("Power successfully calibrated. Ready for flight.\n");

    return 0;
}



int autoBalance(int num1, int num2, int num3, char mode){
    if(mode == 'A'){
        int average = (num1 + num2 + num3) / 3;
        printf("You selected: Auto Balance\n");
        printf("Result: The Arc Reactor will use Auto Balance: %d \n", average);
        printf("Power successfuly calibrated. Ready for flight.\n");
    }
    return 0;
}


int main(){
    char mode;
    int num1;
    int num2;
    int num3;

    printf("Welcome to the Arc Reactor Calibration System!\n");
    printf("Choose your calibration mode:\n");
    printf("M - Maximize Power\n");
    printf("L - Limit Power\n");
    printf("A - Auto Balance\n");

    scanf(" %c", &mode);

    printf("Enter energy reading 1\n");
    scanf("%d", &num1);

    printf("Enter energy reading 2\n");
    scanf("%d", &num2);

    printf("Enter energy reading 3\n");
    scanf("%d", &num3);


    if(mode == 'M'){
        maximizePower(num1, num2, num3, mode);
    }

    else if(mode == 'L'){
        limitPower(num1, num2, num3, mode);
    }

    else if(mode == 'A'){
        autoBalance(num1, num2, num3, mode);
    }

    return 0;
}



//mp returns biggest 
//lm returns the smallest
//ab returns average (num1 + num2 + num3) / 3

//Selects a mode
//User enters 3 numbers
//Prints: You selected: "mode choice", 
//Result: The Arc Reactor will use the highest energy level: ""
//Power successfully calibrated. Ready for flight.

