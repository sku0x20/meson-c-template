#include <stdio.h>
#include "calculator.h"

int main() {
    printf("Hello, World! from meson\n");
    // Perform some calculations
    printf("2 + 3 = %d\n", add(2, 3));
    printf("5 - 2 = %d\n", subtract(5, 2));
    printf("3 * 4 = %d\n", multiply(3, 4));
    printf("8 / 2 = %d\n", divide(8, 2));
    return 0;
}
