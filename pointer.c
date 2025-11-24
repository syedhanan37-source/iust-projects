#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;   // pointer points to x

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("Pointer p stores = %p\n", p);
    printf("Value pointed by p = %d\n", *p);

    return 0;
}
