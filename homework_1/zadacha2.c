#include <stdio.h>

int main() {
    int distance;

    printf("Введите расстояние до ближайшей станции подзарядки(в км): ");
    scanf("%d", &distance);

    if (distance <= 500) {
        printf("Луноход сможет добраться до станции подзарядки.\n");
    } else {
        printf("К сожалению, луноход не сможет добраться до станции.\n");
    }

    return 0;
}
