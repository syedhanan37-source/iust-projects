#include <stdio.h>

#define PI 3.14159           // Macro constant
#define SQUARE(x) ((x)*(x))  // Macro function

int main() {
    int r = 5;

    printf("PI = %.5f\n", PI);
    printf("Square of %d = %d\n", r, SQUARE(r));

    return 0;
}
