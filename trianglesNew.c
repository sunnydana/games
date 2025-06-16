#include <stdio.h>

int main(){
    int n;

    int i = 0; //collums
    int j = 0;  //rows

    printf("Enter a positive integer:"); //asks for int
    scanf("%d", &n); //places int in "n"

    while(i < n){ 
        printf("\n");
        i++;

        j = 0;
    while(j < i){
        printf("*");
        j++;
    }
   }
}


/*
amount of rows based on number entered
increases by 1 each line
*/

/*
input: 1
while(0 < 1)  true
prints space
i++; i = 1

while(0 < 1)  true
prints *
j++; j = 1


while(1 < 1) false
loop stops



*/