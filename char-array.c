#include <stdio.h>

int main() {
    char arr[5] = {'A', 'B', 'C', 'D', 'E'};
    
    printf("Character array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%c ", arr[i]);
    }

    return 0;
}
