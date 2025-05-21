#include <stdio.h>

int main() {
    int n;
    printf("Введи кількість елементів: ");
    scanf("%d", &n);

    double X[n], Y[n], Z[2 * n];

    printf("Введи масив X:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &X[i]);
    }

    printf("Введи масив Y:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &Y[i]);
    }

    for (int i = 0; i < n; i++) {
        if (X[i] < 0 && Y[i] < 0) {
            Z[i] = X[i] * X[i];
            Z[n + i] = Y[i];
        } else {
            Z[i] = X[i] + 0.5;
            Z[n + i] = Y[i];
        }
    }

    printf("Масив Z:\n");
    for (int i = 0; i < 2 * n; i++) {
        printf("%6.2lf ", Z[i]); // формат 4.2 — тобто 6 ширина, 2 після коми
    }

    printf("\n");
    return 0;
}
