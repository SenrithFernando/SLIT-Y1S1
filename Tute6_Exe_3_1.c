//Write three functions do the following
//add - add two integers pass as parameters and return the result
//multiply - multiply two integers pass as parameters and return the result
//square – receive an integer as a parameter and return the result after multiplying the
//number by itself. 


#include <stdio.h>

int add(int a, int b);
int multiply(int a, int b);
int square(int a);

int main(void) {
    char func;
    int num1, num2;

    printf("Select your Function: (add-a, multiply-m, square-s: enter only one letter): ");
    scanf(" %c", &func); 

    if (func == 'a'|| func == 'A') {
        printf("Add\n");

        printf("Enter num 1: ");
        scanf("%d", &num1);

        printf("Enter num 2: ");
        scanf("%d", &num2);

        add(num1, num2);
    } else if (func == 'm'|| func == 'M') {
        printf("Multiply\n");

        printf("Enter num 1: ");
        scanf("%d", &num1);

        printf("Enter num 2: ");
        scanf("%d", &num2);

        multiply(num1, num2);
    } else if (func == 's' || func == 'S') {
        printf("Square\n");

        printf("Enter num: ");
        scanf("%d", &num1);

        square(num1);
    }

    return 0;
}

int add(int a, int b) {
    int sum;

    sum = a + b;

    printf("Sum is : %d\n", sum);
    return sum;
}

int multiply(int a, int b) {
    int product;

    product = a * b;

    printf("Sum is : %d\n", product);
    return product;
}

int square(int a) {
    int result;

    result = a * a;

    printf("Sum is : %d\n", result);
    return result;
}
