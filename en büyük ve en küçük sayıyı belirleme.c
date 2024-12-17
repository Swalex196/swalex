#include <stdio.h>
#include <stdlib.h>

int main() {
    int boyut, i;
    int *dizi;
    int kucuk, buyuk;
    printf("Dizi boyutunu giriniz: ");
    scanf("%d", &boyut);
    dizi = (int *)malloc(boyut * sizeof(int));//bellekte alan ayırmak içindir..
    printf("Dizi elemanlarini giriniz:\n");
    for (i = 0; i < boyut; i++) {
        scanf("%d", &dizi[i]);
    }
    kucuk = buyuk = dizi[0];
    for (i = 1; i < boyut; i++) {
        if (dizi[i] < kucuk) {
            kucuk = dizi[i];
        }
        if (dizi[i] > buyuk) {
            buyuk = dizi[i];
        }
    }
    printf("Dizinin en küçük elemani: %d\n", kucuk);
    printf("Dizinin en büyük elemani: %d\n", buyuk);
    free(dizi); //ayrılan alanı boşaltmak içindir..
    return 0;
}
