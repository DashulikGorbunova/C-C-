#include <stdio.h>

int main() {
    int mass;

    printf("Введите вашу массу (в кг): ");
    scanf("%d", &mass);

    if (mass >= 60 && mass <= 90) {
        printf("Вы можете пройти отбор для космонавта.\n");
    } else {
        printf("К сожалению, вы не подходите по массе для отбора в космонавты.\n");
    }

    return 0;
}
