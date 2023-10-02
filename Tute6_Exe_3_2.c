#include <stdio.h>

int add(int a, int b);
int multiply(int a, int b);
int square(int a);

// Function to add two integers and return the result
int add(int a, int b) {
    return a + b;
}

// Function to multiply two integers and return the result
int multiply(int a, int b) {
    return a * b;
}

// Function to square an integer and return the result
int square(int a) {
    return a * a;
}

int main() {
    // Calculate the expression (3*4 + 5*7)^2 using the functions
    int result = square(add(multiply(3, 4), multiply(5, 7)));

    printf("Result: %d\n", result);

    return 0;
}
