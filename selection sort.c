
#include <stdio.h>

// Swap fonksiyonu, iki elemanın yerlerini değiştirir
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Selection Sort algoritması
void selectionSort(int arr[], int n) {
    int i, j, minIndex;

    // Dizi üzerinde dolaş
    for (i = 0; i < n - 1; i++) {
        // Minimum elemanın indisini bul
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Minimum elemanı bulunan yerle değiştir
        swap(&arr[minIndex], &arr[i]);
    }
}

// Diziyi ekrana yazdırmak için yardımcı fonksiyon
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Verilen dizi:\n");
    printArray(arr, n);

    // Selection Sort'u uygula
    selectionSort(arr, n);

    printf("\nSıralı dizi:\n");
    printArray(arr, n);

    return 0;
}
