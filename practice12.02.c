#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};
int main() {
    struct Person p = {"Dasha", 17, 1.64};
    printf("Name: %s, Age: %d, Height: %.2f\n", p.name, p.age, p.height);
    return 0;
};