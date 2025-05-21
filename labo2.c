#include <stdio.h>
#include <math.h> // Для середнього геометричного (sqrt, pow)

int main() {
    int N;
    printf("Введіть кількість чисел N: ");
    scanf("%d", &N);

    int MAS[N];
    for (int i = 0; i < N; i++) {
        printf("Введіть число %d: ", i + 1);
        scanf("%d", &MAS[i]);
    }

    // а) Сума парних та їх середнє арифметичне
    int sum_even = 0, count_even = 0;
    for (int i = 0; i < N; i++) {
        if (MAS[i] % 2 == 0) {
            sum_even += MAS[i];
            count_even++;
        }
    }
    if (count_even > 0) {
        printf("Сума парних чисел: %d\n", sum_even);
        printf("Середнє арифметичне парних: %.2f\n", (float)sum_even / count_even);
    } else {
        printf("Парних чисел немає.\n");
    }

    // б) Добуток непарних та їх середнє геометричне
    int product_odd = 1, count_odd = 0;
    for (int i = 0; i < N; i++) {
        if (MAS[i] % 2 != 0) {
            product_odd *= MAS[i];
            count_odd++;
        }
    }
    if (count_odd > 0) {
        printf("Добуток непарних чисел: %d\n", product_odd);
        printf("Середнє геометричне непарних: %.2f\n", pow(product_odd, 1.0 / count_odd));
    } else {
        printf("Непарних чисел немає.\n");
    }

    // в) Максимальне значення та його номер
    int max = MAS[0], max_index = 0;
    for (int i = 1; i < N; i++) {
        if (MAS[i] > max) {
            max = MAS[i];
            max_index = i;
        }
    }
    printf("Максимальне значення: %d (номер %d)\n", max, max_index + 1);

    return 0;
}