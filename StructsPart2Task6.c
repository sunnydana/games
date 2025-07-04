#include <stdio.h>
#include <string.h>

struct House {
    char name[500];
    int points;
};

int main(){
    printf("Hogwarts House Points struct\n");
    struct House theHouses[4];

    int highestPoints = 0;
    char highestPointsHouse[50];

    strcpy(theHouses[0].name, "Gryffindor");
    strcpy(theHouses[1].name, "Hufflepuff");
    strcpy(theHouses[2].name, "Ravenclaw");
    strcpy(theHouses[3].name, "Slytherin");

    for(int i = 0; i < 4; i++){
        printf("Enter the current points for house %s:\n", theHouses[i].name);
        scanf("%d", &theHouses[i].points);

        if(theHouses[i].points > highestPoints){
            highestPoints = theHouses[i].points;
            strcpy(highestPointsHouse, theHouses[i].name);
        }

    }

    printf("\n");

    for(int j = 0; j < 4; j++){
        printf("%s house points: %d\n", theHouses[j].name, theHouses[j].points);
    }

    printf("The house with the highest points is %s!", highestPointsHouse);


}





