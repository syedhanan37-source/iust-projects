#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int *p = arr;   // pointer to array

    printf("Array contents:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(p + i));

    return 0;
}
