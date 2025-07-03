#include <stdio.h>

int main(){
    const int MAX_SPEED_HIGHWAY = 120;
    const int MAX_SPEED_CITY = 50;
    const int MAX_SPEED_RESIDENTIAL = 30;

    printf("The maximum speed on highways is %d km/h.\n", MAX_SPEED_HIGHWAY);
    printf("The maximum speed in the city is %d km/h.\n",MAX_SPEED_CITY);
    printf("The maximum speed in residential areas is %d km/h.\n",MAX_SPEED_RESIDENTIAL);

   // MAX_SPEED_CITY = 60;

    return 0;
}