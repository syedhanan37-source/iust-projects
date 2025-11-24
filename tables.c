#include <stdio.h>

int main() {
    for (int n = 2; n <= 10; n++) {      // tables from 2 to 10
        printf("Table of %d:\n", n);

        for (int i = 1; i <= 10; i++) {  // each table up to 10
            printf("%d x %d = %d\n", n, i, n * i);
        }

        printf("\n");  // blank line between tables
    }

    return 0;
}
