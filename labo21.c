#include <stdio.h>

int main() {
    int N;
    printf("Введи кількість елементів: ");
    scanf("%d", &N);

    double arr[N];
    printf("Введи %d дійсних чисел:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%lf", &arr[i]);
    }

    // Сума від'ємних
    double sum_neg = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0)
            sum_neg += arr[i];
    }

    // Пошук індексів min та max
    int min_idx = 0, max_idx = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[min_idx]) min_idx = i;
        if (arr[i] > arr[max_idx]) max_idx = i;
    }

    // Добуток між min та max (не включаючи їх)
    double prod = 1;
    if (min_idx > max_idx) {
        int tmp = min_idx;
        min_idx = max_idx;
        max_idx = tmp;
    }

    if (max_idx - min_idx > 1) {
        for (int i = min_idx + 1; i < max_idx; i++) {
            prod *= arr[i];
        }
    } else {
        prod = 0; // між ними нічого немає
    }

    printf("Сума від'ємних елементів: %.2lf\n", sum_neg);
    printf("Добуток між min і max: %.2lf\n", prod);

    return 0;
}
