#include <stdio.h>
#include <assert.h>

int qualityPoints(int average) {
    if (average >= 90 && average <= 100) {
        return 4;
    } else if (average >= 80 && average <= 89) {
        return 3;
    } else if (average >= 70 && average <= 79) {
        return 2;
    } else if (average >= 60 && average <= 69) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    // Test with boundary values
    assert(qualityPoints(90) == 4);
    assert(qualityPoints(100) == 4);
    assert(qualityPoints(80) == 3);
    assert(qualityPoints(89) == 3);
    assert(qualityPoints(70) == 2);
    assert(qualityPoints(79) == 2);
    assert(qualityPoints(60) == 1);
    assert(qualityPoints(69) == 1);
    assert(qualityPoints(0) == 0);  // Below 60, should return 0

    // Test with middle values
    assert(qualityPoints(85) == 3);  // Middle of 80-89 range
    assert(qualityPoints(75) == 2);  // Middle of 70-79 range
    assert(qualityPoints(65) == 1);  // Middle of 60-69 range

    printf("All assertions passed! The function works correctly.\n");
    return 0;
}
