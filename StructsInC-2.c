#include <stdio.h>
#include <string.h>

struct Student{
    char name[50]; // 1 name: up to 49 letters(last space for '\0)
    int grade; // 3 ages one for each animal

};

int main(){
    printf("Student Struct\n");

    struct Student myStudents[3]; //an array with 3 spaces, each space containing a struct

    
    for(int j = 0; j < 3; j++){
        printf("Enter student's name:\n");
        scanf("%s", myStudents[j].name);
        printf("Enter student's grade:\n");
        scanf("%d", &myStudents[j].grade);
    }

    /*
    printf("Enter student's name:\n");
    scanf("%s", myStudents[0].name);
    printf("Enter student's grade:\n");
    scanf("%d", &myStudents[0].grade);
    printf("\n");

    printf("Enter student's name:\n");
    scanf("%s", myStudents[1].name);
    printf("Enter student's grade: \n");
    scanf("%d", &myStudents[1].grade);
    printf("\n");

    printf("Enter student's name:\n");
    scanf("%s", myStudents[2].name);
    printf("Enter student's grade:\n");
    scanf("%d", &myStudents[2].grade);
    printf("\n");
    */

    for(int i = 0; i < 3; i++){
        printf("Student's name: %s\nStudent's grade: %d\n", myStudents[i].name, myStudents[i].grade); 
        printf("\n");
    }

}




































/*
Three structs
*/


/*
#include <stdio.h>
#include <string.h>

struct Animals {
    char names[3][20];  // Array of 3 names
    int ages[3];        // Array of 3 ages
};

int main() {
    struct Animals myAnimals;

    // Get user input for each animal
    for (int i = 0; i < 3; i++) {
        printf("Enter name of animal %d: ", i + 1);
        fgets(myAnimals.names[i], sizeof(myAnimals.names[i]), stdin);

        // Remove newline character from fgets
        size_t len = strlen(myAnimals.names[i]);
        if (len > 0 && myAnimals.names[i][len - 1] == '\n') {
            myAnimals.names[i][len - 1] = '\0';
        }

        printf("Enter age of %s: ", myAnimals.names[i]);
        scanf("%d", &myAnimals.ages[i]);
        getchar(); // Consume the leftover newline character from scanf
    }

    // Print names + ages together
    printf("\nAnimal Info:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s is %d years old.\n", myAnimals.names[i], myAnimals.ages[i]);
    }

    return 0;
}
*/