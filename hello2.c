#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
    srand(time(0));
    int number;
    int numberGuess = (rand() % 5) + 1; ;

    while(number != numberGuess){}
}