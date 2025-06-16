#include <stdio.h>
#include <string.h>

    int add(int num1, int num2, char operator) {
        int sum = num1 + num2;
        printf("You selected operator: %c\n", operator);
        return sum;
    }

    int subtract(int num1, int num2, char operator) {
        int sum = num1 - num2;
        printf("You selected operator: %c\n", operator);
        return sum;
    }

    int multiply(int num1, int num2, char operator){
        int sum = num1 * num2;
        printf("You selected operator: %c\n", operator);
        return sum;
    }
    
    int divide(int num1, int num2, char operator){
        int sum = num1 / num2;
        printf("You selected operator: %c\n", operator);
        return sum;
    }

int main(){

    int num1;
    int num2;

    char operator;
    int answer;

    printf("Choose an + for addition, - for subtraction, * for multiplication, or / for division\n");
    scanf(" %c", &operator);

    printf("Enter a number\n");
    scanf("%d", &num1);

    printf("Enter a number\n");
    scanf("%d", &num2);

    if(operator == '+'){
       answer = add(num1, num2, operator);
       printf("The sum is %d ", answer);
    }
    else if(operator == '-'){
        answer = subtract(num1, num2, operator);
        printf("The sum is %d ", answer);
    }
    else if(operator == '*'){
        answer = multiply(num1, num2, operator);
        printf("The sum is %d ", answer);
    }
    else if(operator == '/'){
        answer = divide(num1, num2, operator);
        printf("The sum is %d ", answer);
    }

  return 0;
}

//two variables 
//function that adds +
//function that subtracts -
//function that multiplies *
//function that divides /