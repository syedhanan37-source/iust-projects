#include <stdio.h>

int main() {
    int n;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {      // if i divides n completely
            printf("%d ", i);
        }
    }

    return 0;
}
