#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("Inside function (after swap): a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(x, y);

    printf("In main (after function call): x = %d, y = %d\n", x, y);

    return 0;
}
