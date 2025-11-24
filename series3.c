#include <stdio.h>

int main() {
    int n;
    int term = 2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        term = term * 2;   // next term
    }

    return 0;
}
