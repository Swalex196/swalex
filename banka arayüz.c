#include <stdio.h>
#include <string.h>

int main()
{
    int islem, yenibakiye, yatirilanpara, cekilenpara, cevap;
    char sifre[] = "0934";
    int bakiye = 50000;
    int limit = 5000;
    char girilensifre[4];

    // Karşılama mesajı
    printf("Bankamıza hoşgeldiniz. \nLütfen şifrenizi giriniz: ");
    scanf("%s", girilensifre);

    if (strcmp(girilensifre, sifre) == 0)
    {
        printf("Hoşgeldiniz, size nasıl yardımcı olabiliriz?\n");
        do
        {
            
            printf("1- Bakiye öğren\n");
            printf("2- Para yatır\n");
            printf("3- Para çek\n");

            printf("Lütfen bir işlem seçiniz: ");
            scanf("%d", &islem);

            if (islem == 1)
            {
                printf("Mevcut bakiyeniz: %d₺\n", bakiye);
            }
            else if (islem == 2)
            {
                printf("Ne kadar para yatırmak istiyorsunuz?\n");
                scanf("%d", &yatirilanpara);
                yenibakiye = bakiye + yatirilanpara;
                printf("Para yatırma işlemi başarılı.\nYeni bakiyeniz: %d₺\n", yenibakiye);
            }
            else if (islem == 3)
            {
                printf("Ne kadar para çekmek istiyorsunuz?\n");
                scanf("%d", &cekilenpara);

                if (cekilenpara > limit)
                {
                    printf("Bu miktarda para çekemezsiniz.\n");
                }
                else
                {
                    if (cekilenpara > bakiye)
                    {
                        printf("Yetersiz bakiye. Para çekme işlemi gerçekleştirilemedi.\n");
                    }
                    else
                    {
                        yenibakiye = bakiye - cekilenpara;
                        printf("Para çekme işlemi başarılı. Yeni bakiyeniz: %d₺\n", yenibakiye);
                    }
                }
            }
            else
            {
                printf("Geçersiz işlem.\n");
            }

            printf("Devam etmek için 1'e basınız, çıkış için başka bir sayı giriniz: ");
            scanf("%d", &cevap);
        } while (cevap == 1);
        if (cevap != 1)
        {
            printf("Bankamızı kullandığınız için teşekkür eder, iyi günler dileriz...");
        }
    }
    else
    {
        printf("Girilen şifre hatalı!\n");
    }

    return 0;
}
