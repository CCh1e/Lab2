#include <stdio.h>

#define MAX_SIZE 10  // Максимальний розмір матриці

int main() {
    int N;  // Розмір матриці
    double A[MAX_SIZE][MAX_SIZE];  // Матриця
    double row_averages[MAX_SIZE];  // Масив для зберігання середніх значень рядків

    // Введення розміру матриці
    printf("Введіть розмір квадратної матриці (N <= 10): ");
    scanf("%d", &N);

    // Перевірка коректності розміру
    if (N <= 0 || N > MAX_SIZE) {
        printf("Невірний розмір матриці! Має бути 1 <= N <= 10.\n");
        return 1;
    }

    // Введення елементів матриці
    printf("Введіть елементи матриці %dx%d:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%lf", &A[i][j]);
        }
    }

    // Обчислення середнього арифметичного для кожного рядка
    for (int i = 0; i < N; i++) {
        double sum = 0.0;
        for (int j = 0; j < N; j++) {
            sum += A[i][j];
        }
        row_averages[i] = sum / N;
    }

    // Виведення результатів
    printf("\nСереднє арифметичне елементів кожного рядка:\n");
    for (int i = 0; i < N; i++) {
        printf("Рядок %d: %.2f\n", i, row_averages[i]);
    }

    return 0;
}