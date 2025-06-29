#include <stdio.h>
#include <string.h>

struct Employee{
    char name[50];
    int salary;
};

int main(){

    printf("Employee Struct\n");
    struct Employee myEmployees[3];

    for(int i = 0; i < 3; i++){
        printf("Enter employee's name:\n");
        scanf("%s", myEmployees[i].name);
        printf("Enter employee's salary:\n");
        scanf("%d", &myEmployees[i].salary);
    }

    for(int j = 0; j < 3; j++){
        printf("Employee's name: %s\nSalary: %d\n", myEmployees[j].name, myEmployees[j].salary);
    }
}