#include<stdio.h>

int main(){
    char name[100];
    printf("What's your name?\n");
    scanf("%99s", name);
    printf("%s\n", name);


    int num1;
    int num2;

    printf("Give me a first number\n");
    scanf("%d", &num1);

    printf("Give me a second number\n");
    scanf("%d", &num2);

    int num3 = num1 + num2;

    printf("The sum is %d", num3);



    int age;

    printf("\nHow old are you?\n");
    scanf("%d", &age);
    printf("%d\n", age);

    int ageInFiveYrs = age + 5;
    printf("In 5 years, you will be %d years old!", ageInFiveYrs);



    char usersName[100];
    int usersAge;

    printf("\nEnter your name?\n");
    scanf("%99s", usersName);
    printf("%s\n", name);

    printf("Enter your age\n");
    scanf("%d", &usersAge);
    printf("%d\n", usersAge);

    printf("Hello %s! You are %d years old and a real G!", usersName, usersAge);

    return 0;

}
