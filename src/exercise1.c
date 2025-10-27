#include <stdio.h>

int main() {
    double numbers[10];
    double sum = 0.0;
    printf("Введите 10 вещественных чисел:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }


    double average = sum / 10.0;


    printf("Среднее арифметическое: %.3f\n", average);

    return 0;
}
