#include <stdio.h>

// Сортування масиву за спаданням (бульбашка)
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

// Лінійний пошук
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

// Бінарний пошук (масив має бути відсортований за спаданням!)
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int main() {
    int X[15], A;

    printf("Введи 15 елементів масиву X:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &X[i]);
    }

    printf("Введи цільовий елемент A: ");
    scanf("%d", &A);

    // Лінійний пошук
    int linIndex = linearSearch(X, 15, A);
    if (linIndex != -1)
        printf("Лінійний пошук: A знайдено на позиції %d\n", linIndex);
    else
        printf("Лінійний пошук: A не знайдено\n");

    // Сортування
    sortDescending(X, 15);
    printf("Відсортований масив (спадання):\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");

    // Бінарний пошук
    int binIndex = binarySearch(X, 15, A);
    if (binIndex != -1)
        printf("Бінарний пошук: A знайдено на позиції %d\n", binIndex);
    else
        printf("Бінарний пошук: A не знайдено\n");

    return 0;
}
