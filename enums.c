#include <stdio.h>

int main(){
    //int light = 1;

    enum TrafficLight { RED, YELLOW, GREEN };

    enum TrafficLight light = YELLOW;

    if(light == RED){
        printf("Stop!");
    }
    else if(light == YELLOW){
        printf("Get ready...");
    }
    else if(light == GREEN){
        printf("Go!");
    }
    else{
        printf("Invalid traffic light!");
    }

    return 0;
}

//0 means RED
// 1 means YELLOW
// 2 means GREEN