#include<stdio.h>
#include<string.h>
int main(){
    printf("Hello Tony\n");
    char answer[100];
    printf("How's the gabagool?\n");
    scanf("%s", answer);
    if(strcmp(answer, "bad") == 0){
        printf("Whadaya gonna do");
    }
    else if(strcmp(answer, "good") == 0){
        printf("Alright, so have another!");
    }
    return 0;

}

/* printf("Answer: %s\n", answer); */