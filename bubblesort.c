#include <stdio.h>
#include <stdbool.h>

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printarray(int dizi[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

void bubblesort(int dizi[], int n) {
    int i, j;
    bool swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                swap(&dizi[j], &dizi[j + 1]);
                swapped = true;
            }
        }
        printf("%d. tur sonucu: ", i + 1);
        printarray(dizi, n);

        if (!swapped) {
            printf("Dizi sýralandý\n");
            break;
        }
    }
}

int main() {
    int dizi[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(dizi) / sizeof(dizi[0]);

    printf("Orijinal dizi: ");
    printarray(dizi, n);

    bubblesort(dizi, n);

    printf("\nSýralý dizi: ");
    printarray(dizi, n);

    return 0;
}
