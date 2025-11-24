#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);   // Print first two terms

    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);

        a = b;
        b = next;
    }

    return 0;
}
