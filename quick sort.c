#include <stdio.h>

// Swap fonksiyonu, iki elemanın yerlerini değiştirir
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Pivot seçimi ve diziyi bölme işlemi
int partition(int arr[], int low, int high) {
    // Pivot olarak son elemanı seçelim
    int pivot = arr[high];
    
    // Pivot'tan küçük elemanları sol tarafa ve büyük elemanları sağ tarafa yerleştir
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // Pivot'u doğru konuma yerleştir
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Quicksort algoritması
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Diziyi böl ve pivotu bul
        int pi = partition(arr, low, high);

        // İlk yarıyı sırala
        quickSort(arr, low, pi - 1);

        // İkinci yarıyı sırala
        quickSort(arr, pi + 1, high);
    }
}

// Diziyi ekrana yazdırmak için yardımcı fonksiyon
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Verilen dizi:\n");
    printArray(arr, n);

    // Quicksort'u uygula
    quickSort(arr, 0, n - 1);

    printf("\nSıralı dizi:\n");
    printArray(arr, n);

    return 0;
}
