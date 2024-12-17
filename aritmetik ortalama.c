#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int toplam = 0;
    double ort;
    printf("Sayı giriniz: ");
    scanf("%d", &j);
    for (i = 1; i <= j; i++)
        toplam += i;
    printf("Girdiğiniz sayıya kadar olan sayıların toplamı: %d\n", toplam);
    if (j > 0) {
        ort = (double)toplam / j;
        printf("Elde edilen toplam değerinin girdiğiniz sayıya bölümü yani aritmetik ortalaması: %f\n", ort);
    } else {
        printf("Girdiğiniz sayı sıfırdan büyük olmalıdır.\n");
    }
    return 0;
}
