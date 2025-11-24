#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract_ab(int a, int b) {
    return a - b;
}

int subtract_ba(int a, int b) {
    return b - a;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("a + b = %d\n", add(a, b));
    printf("a - b = %d\n", subtract_ab(a, b));
    printf("b - a = %d\n", subtract_ba(a, b));

    return 0;
}
