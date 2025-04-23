#include <stdio.h>
#include <stdlib.h>

int main() {
    int M, N;
    
    // Введення розмірів матриці
    printf("Введіть кількість рядків (M): ");
    scanf("%d", &M);
    printf("Введіть кількість стовпців (N): ");
    scanf("%d", &N);

    // Оголошення матриці
    float A[M][N];
    
    // Введення елементів матриці
    printf("Введіть елементи матриці A[%d][%d]:\n", M, N);
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    // Визначення максимально можливої кількості від'ємних елементів
    int max_negative = M * N;
    float B[max_negative];
    int count = 0;

    // Побудова вектора B з від'ємних елементів (за стовпцями)
    for(int j = 0; j < N; j++) {
        for(int i = 0; i < M; i++) {
            if(A[i][j] < 0) {
                B[count] = A[i][j];
                count++;
            }
        }
    }

    // Виведення результатів
    printf("\nВектор B з від'ємних елементів:\n");
    for(int i = 0; i < count; i++) {
        printf("%.2f ", B[i]);
    }

    printf("\n\nКількість від'ємних елементів: %d\n", count);

    return 0;
}