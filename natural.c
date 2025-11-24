#include <stdio.h>

int main() {
    int n, digit;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    printf("Digits in reverse order:\n");

    while (n > 0) {
        digit = n % 10;     // extract last digit
        printf("%d ", digit);
        n = n / 10;         // remove last digit
    }

    return 0;
}
