#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n%-10s %-20s %-10s\n", "Roll", "Name", "Marks");
    printf("---------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}
