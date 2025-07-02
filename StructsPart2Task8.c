#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Player{
    char name[50];
    int level;
    int health;
    bool isAlive;
};

int main(){
    printf("Player Struct\n");
    struct Player players[4];

    char highestLevelPlayer[50];
    int highestLevel = 0;
    int aliveCount = 0;

    for(int i = 0; i < 4; i++){
        printf("Enter name: ");
        scanf("%s", players[i].name);

        printf("Enter level: ");
        scanf("%d", &players[i].level);

        printf("Enter health: ");
        scanf("%d", &players[i].health);

        if(players[i].health > 0){
            players[i].isAlive = 1;
            aliveCount++;
        }
        else{
            players[i].isAlive = 0;
        }

        if(players[i].level > highestLevel){
            highestLevel = players[i].level;
            strcpy(highestLevelPlayer, players[i].name);
        }
    }

    printf("PLAYER INFO\n");

    for(int j = 0; j < 4; j++){
        printf("Player: %s\n", players[j].name);
        printf("Level: %d\n", players[j].level);
        printf("Health: %d\n", players[j].health);
    }

    printf("The highest-level player alive is %s\n", highestLevelPlayer);
    printf("Players currently alive: %d\n", aliveCount);
        
}