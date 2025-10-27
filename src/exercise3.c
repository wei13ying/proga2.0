#include <stdio.h>

#define SIZE 10

int main() {
    double arr[SIZE];
    int K;

    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &arr[i]);
    }

    scanf("%d", &K);

    K = K % SIZE;
    if (K < 0) {
        K += SIZE;
    }

    double temp[SIZE];

    for (int i = 0; i < SIZE; i++) {
        temp[(i + K) % SIZE] = arr[i];
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", temp[i]);
    }
    printf("\n");

    return 0;
}
