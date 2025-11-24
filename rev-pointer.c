#include <stdio.h>

int main() {
    char str[100];
    char *p;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Move pointer to the end of string
    p = str;
    while (*p != '\0') p++;

    p--;  // move back before null terminator

    printf("Reversed string: ");
    while (p >= str) {
        printf("%c", *p);
        p--;
    }

    return 0;
}
