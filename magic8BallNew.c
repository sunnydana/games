#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    
    int random_response;
    char question[500];
    const char *RESPONSES[] = {
        "You're destined for greatness!\n",
        "Wise guy, huh?\n",
        "The answer is unclear, try again.\n",
        "Trust your instincts\n",
        "Not in a million years!\n",
        "Yes, but also no.\n",
        "Something amazing is about to happen!\n",
        "That's classified information.\n",
        "You already know the answer.\n",
        "Relax, OK!\n"
    };

    while(1){
        printf("Ask me anything, and I shall answer! (Type 'exit' to quit)\n");
        fgets(question, sizeof(question), stdin);
        question[strcspn(question, "\n")] = 0;

        if(strcmp(question, "exit") == 0) {
            break;
        }
        else {
            random_response = rand() % 10;
            printf("%s", RESPONSES[random_response]);
        }
    }

    return 0;
}