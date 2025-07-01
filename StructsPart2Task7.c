#include <stdio.h>
#include <string.h>

struct Mobster{
    char name[50];
    char rank[50];
    int kills;
};

int main(){
    printf("Mobster Struct\n");
    struct Mobster theMobsters[3];

    int highest = 0;
    char highestMobster[50];

    for(int i = 0; i < 3; i++){
        printf("Enter mobster's name: ");
        scanf("%s", theMobsters[i].name);

        printf("Rank: ");
        scanf("%s", theMobsters[i].rank);

        printf("Kills: ");
        scanf("%d", &theMobsters[i].kills);
        printf("\n");

        if(theMobsters[i].kills > highest){
            highest = theMobsters[i].kills;
            strcpy(highestMobster, theMobsters[i].name);
        }
    }

    printf("Mobster List\n");


    for(int j = 0; j < 3; j++){
        printf("Mobster: %s\n", theMobsters[j].name);
        printf("Rank: %s\n", theMobsters[j].rank);
        printf("Kills: %d\n", theMobsters[j].kills);
        printf("\n");
    }

    printf("The most dangerous mobster is %s.", highestMobster);
}