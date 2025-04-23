#include <stdio.h>

int main() {
    int n;
    
    // Введення розміру квадратної матриці
    printf("Введіть розмір квадратної матриці: ");
    scanf("%d", &n);

    // Оголошення матриці
    double matrix[n][n];
    double sum = 0.0;

    // Введення елементів матриці
    printf("Введіть елементи матриці:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("Елемент [%d][%d]: ", i, j);
            scanf("%lf", &matrix[i][j]);
            
            // Додавання елементів вище головної діагоналі
            if(j > i) {
                sum += matrix[i][j];
            }
        }
    }

    // Виведення матриці для наочності
    printf("\nВведена матриця:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%6.2f ", matrix[i][j]);
        }
        printf("\n");
    }

    // Виведення результату
    printf("\nСума елементів вище головної діагоналі: %.2f\n", sum);

    return 0;
}