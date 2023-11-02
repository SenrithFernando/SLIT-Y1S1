#include <stdio.h>

int main() {
    char strArr[15];
    int i, j;
    char temp;

    printf("Enter a text (up to 15 characters): ");
    scanf("%15s", strArr); // Input text directly into the array

    // Find the length of the input string
    for (i = 0; strArr[i] != '\0' && i < 15; i++) {
        // Do nothing, just find the length
    }

    // Reverse the elements of the array
    for (j = 0; j < i / 2; j++) {
        //printf("%d\t%d\n",i,j);
        temp = strArr[j];
        strArr[j] = strArr[i - j - 1];
        strArr[i - j - 1] = temp;
    }

    printf("Reversed text: %s\n", strArr);

    return 0;
}
