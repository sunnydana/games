#include <stdio.h>
#include <string.h>

struct Book {
  char title[50];
  char author[50];
  int year;
};

struct Student {
    char name[50];
    int age;
    int grade;
};

struct Animal {
    char animalName[3][20]; //3 names, max 19 characters each
    int animalAge[3]; //3 ages
    
};

int main(){
  printf("Book Struct\n");
  struct Book book1;

  strcpy(book1.title, "Pride and Prejudice");
  strcpy(book1.author, "Jane Austen");
  book1.year = 1813;

  printf("Title: %s\n", book1.title);
  printf("Author: %s\n", book1.author);
  printf("Year: %d\n", book1.year);
  printf("\n");

/* ***************************************************** */

  printf("Student Struct\n");
  struct Student student1;

  strcpy(student1.name, "Bugs Bunny");
  student1.age = 39;
  student1.grade = 2025;

  printf("Student: %s\n", student1.name);
  printf("Student age: %d\n", student1.age);
  printf("Student year: %d\n", student1.grade);
  printf("\n");

  /* ***************************************************** */

  struct Animal myAnimals; 
  //Declares the struct variable
  //This creates a variable called myAnimals of type struct Animals
  //myAnimals now has:
  //myAnimals.names -> an array of 3 names(each can hold a string of up to 19 characters)
  //myAnimals.ages -> an array of 3 integers
  /*
  🌟 Analogy:
    Think of struct Animals as a blueprint for a box that holds:

     A list of 3 names

     A list of 3 ages

     When you write struct Animals myAnimals;, you are creating an actual box based on that blueprint
  */
  

  // Fill names
  strcpy(myAnimals.animalName[0], "Daffy Duck");
  strcpy(myAnimals.animalName[1], "Tweety");
  strcpy(myAnimals.animalName[2], "Road Runner");

  // Fill ages
  myAnimals.animalAge[0] = 45;
  myAnimals.animalAge[1] = 25;
  myAnimals.animalAge[2] = 35;

  printf("Animal Struct\n");

  // Print names + ages together
  printf("Animal Info:\n");
  for (int i = 0; i < 3; i++) {
    printf("Animal name: %s\n", myAnimals.animalName[i]);
    printf("Age: %d\n", myAnimals.animalAge[i]);
  }

  return 0;

}







//position one ->struct 

//when declaring an array it counts  0 1 as 2


//struct Person myPersons[2];
//create an array of two elements


 /* 
  struct Animal myAnimals[2]; //Two animal records

  //Adding Names
  strcpy(myAnimals[0].name[0], "Daffy Duck");
  strcpy(myAnimals[0].name[1], "Tweety");
  strcpy(myAnimals[0].name[2], "Road Runner");

  //Adding Ages
  myAnimals[1].Age[0] = 45;
  myAnimals[1].Age[1] = 25;
  myAnimals[1].Age[2] = 35;

  //Print Names
  printf("Animals Names:\n");
  for(int i = 0; i < 3; i++){
    printf("%s\n", myAnimals[0].name[i]);
  }
  */