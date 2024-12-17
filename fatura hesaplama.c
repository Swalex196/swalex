#include <stdio.h>
int main()
{
int toplam = 0;
int fiyat = 0;
const float kdv = 0.08f;
do {
toplam += fiyat;
printf("Lutfen urun fiyatini girin (TL): ");
scanf("%d", &fiyat);
}while(fiyat != -1);
toplam = toplam + (int)(toplam * kdv);
printf("Toplam fiyat (+KDV): %d TL\n", toplam);
return 0;
}

