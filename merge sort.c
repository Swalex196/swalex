#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Geçici diziler oluştur
    int L[n1], R[n2];

    // Geçici dizelere veri kopyala
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // İki alt diziyi birleştir
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Kalan elemanları kopyala (eğer varsa)
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Orta noktayı bul
        int m = l + (r - l) / 2;

        // İlk yarıyı sırala
        mergeSort(arr, l, m);

        // İkinci yarıyı sırala
        mergeSort(arr, m + 1, r);

        // İki yarıyı birleştir
        merge(arr, l, m, r);
    }
}


// Diziyi ekrana yazdırmak için yardımcı fonksiyon
void printArray(int A[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Verilen dizi:\n");
    printArray(arr, arr_size);

    // Mergesort'u uygula
    mergeSort(arr, 0, arr_size - 1);

    printf("\nSıralı dizi:\n");
    printArray(arr, arr_size);

    return 0;
}
