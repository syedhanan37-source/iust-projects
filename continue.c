#include <stdio.h>

int main() {

    printf("Demonstrating continue:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;   // skip printing 5
        }
        printf("%d ", i);
    }

    printf("\n\nDemonstrating break:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;      // stop the loop when i becomes 5
        }
        printf("%d ", i);
    }

    return 0;
}
