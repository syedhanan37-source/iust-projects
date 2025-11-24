#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {      // outer loop for numbers
        for (int j = 1; j <= i; j++) {  // inner loop prints i 'i' times
            printf("%d ", i);
        }
    }

    return 0;
}
