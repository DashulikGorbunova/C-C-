#include <stdio.h>

struct Person {
    char name[50];
    int age; 
    float gpa;
};

int main() {
    int n;
    scanf ("%d", &n);
    struct Person students [n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        printf("Name: %s\nAge: %d\nGPA: %.1f\n\n", students[i].name, students[i].age, students[i].gpa);
    }

    return 0;

};