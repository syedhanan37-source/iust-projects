#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    printf("Enter text to write into file:\n");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Data written successfully.\n");
    return 0;
}
