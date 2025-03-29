#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    char *RESPONSES[10] = {
    "You are destined for greatness.\n"
    ,"Wise guy,huh?."
    ,"The answer is unclear, try that again.\n"
    ,"Trust your instincts.\n"
    ,"Not in a million years!\n"
    ,"Yes, but also no.\n"
    ,"Something amazing is about to happen!\n"
    ,"That's classified information.\n"
    ,"You already know the answer\n"
    ,"Relax, OK!\n"
    };

    int size = sizeof(RESPONSES) /sizeof(RESPONSES[0]);

    while(1){
    printf("Enter a question(or 'exit' to stop):\n");
    char question[500];
    fgets(question, sizeof(question), stdin);
    question[strcspn(question, "\n")] = 0;


    if (strcmp(question, "exit") == 0){
        break;
    }

    int randomIndex = rand() % size;
    printf("%s\n", RESPONSES[randomIndex]);
}
    return 0;
}