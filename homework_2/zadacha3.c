#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char name[50];
    struct Date date;
    char description[100];
};

int main() {
    int n;
    scanf("%d", &n);
    struct Event events[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d %s", events[i].name, &events[i].date.day, &events[i].date.month, &events[i].date.year, events[i].description);
    }

    for (int i = 0; i < n; i++) {
        printf("Event: %s\nDate: %d/%d/%d\nDescription: %s\n\n", events[i].name, events[i].date.day, events[i].date.month, events[i].date.year, events[i].description);
    }

    return 0;
}