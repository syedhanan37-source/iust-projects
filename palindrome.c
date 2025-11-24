#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length manually
    while (str[length] != '\0') {
        length++;
    }

    // Remove newline if fgets captured it
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Check palindrome
    int left = 0, right = length - 1;
    int isPalindrome = 1;

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
