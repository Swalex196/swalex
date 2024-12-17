#include <stdio.h>
#include <conio.h>

int main(void) {
    float birimfiyat, toplamtutar = 0.0;
    int adet, uruncesidi;
    char cevap;

    do {
        printf("\nUrun cesidi nedir? (1 koltuk 2 masa 3 sandalye): ");
        scanf("%d", &uruncesidi);

        switch (uruncesidi) {
            case 1:
                birimfiyat = 20.50;
                break;
            case 2:
                birimfiyat = 12.75;
                break;
            case 3:
                birimfiyat = 7.80;
                break;
            default:
                printf("Gecersiz urun cesidi!\n");
                continue; // Geçersiz bir urun cesidi girilirse döngünün başına dön
        }

        printf("Urunun birim fiyati %.2f TL. Kac adet satiniz?: ", birimfiyat);
        scanf("%d", &adet);

        toplamtutar += birimfiyat * adet;

        printf("Baska urun satisi yapacak misiniz? (e/E: Evet, h/H: Hayir): ");
        cevap = getche();
        printf("\n");

    } while (cevap == 'e' || cevap == 'E');

    printf("Toplam tutar: %.2f TL\n", toplamtutar);

    return 0;
