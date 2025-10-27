#include <stdio.h>



int main() {
    int matrix_a[10][3];
    int matrix_b[3][10];
    int result[10][10];


    printf("input first matrix (%dx%d):\n", 10, 3);
    for (int i = 0; i < 10; i++) {
        printf("string %d (3 numbers): ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }


    printf("\ninput second matrix (%dx%d):\n", 3, 10);
    for (int i = 0; i < 3; i++) {
        printf("string %d (10 numbers): ", i + 1);
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }


    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }


    printf("\nresult:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d", result[i][j]);
            if (i != 10 - 1 || j != 10 - 1) {
                printf(" ");
            }
        }
    }
    printf("\n");

    return 0;
}
