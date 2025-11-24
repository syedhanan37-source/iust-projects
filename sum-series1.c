#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = 1.0;   // first term is 1

    for (int i = 2; i <= n; i += 2) {   // even numbers: 2, 4, 6, ...
        sum = sum + 1.0 / i;
    }

    printf("Sum of series = %.4f\n", sum);

    return 0;
}
