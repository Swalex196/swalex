#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


int bakiye;

int menu (){
    system("cls");
    printf("\nkullanilabilir bakiyeniz : %d TL \n\n", bakiye);

    int secim ;
    printf("\n\tBankamatik uygulamasi\n ");
    printf("\t1-paracek\n");
    printf("\t2-parayatir\n");
    printf("\t3-faturaode\n");
    printf("\t4-havale/EFT\n");
    printf("\t5-cikis\n");

return secim;
}

void paraCek()
{
    int miktar;
    printf("miktar : ");
    scanf("%d", &miktar);
    printf("isleminiz gerceklestiriliyor... \n"); sleep(2);

    if(bakiye<miktar)
    {
        printf("bakiye yetersiz...\n");
    }
    else
    {
        bakiye -=miktar;
        printf("para cekme isleminiz basarili paranizi almayi unutumayin");sleep(2);
    }
    printf("ana menuye yonlendiriliyorsunuz...\n"); sleep(2);

    
}

void paraYatir()
{
    int miktar;
        printf("yatiracağiniz miktari girin ve para yerlestirme yerine koyunuz : ");
         scanf("%d", &miktar);
        printf("isleminiz gerceklestiriliyor... \n"); sleep(2);
         bakiye +=miktar;
        printf("isleminiz gerceklestirildi ana menuye yonlendiriliyorsunuz ...  \n");sleep(2);
}

void faturaOde()
{
    int miktar, secim, no;

    printf("1-elektrik\n");
    printf("2-su\n");
    printf("3-dogalgaz\n");
    printf("4-telefon\n");
    printf("5-internet\n");
    scanf("%d", &secim);
    
    if(secim < 1 || secim > 5)
    {
        printf("hatali secim yaptiniz");
    }
    else
    {
        printf("fatura no : ");sleep(2);
        scanf("%d", &no);
        miktar = rand() % 100 + 20;
        printf("u..... y..... kisisine ait fatura bedeli %d TL \n ", miktar);
        printf("odemeyi onaylamak icin 1 degerine basiniz\n");sleep(2);
        scanf("%d", &secim);
            
            if(secim !=1){
                printf("islem iptal edildi ... \n");
            }
            else
            {
                bakiye -=miktar ;
                printf("isleminiz gerceklestirildi ");sleep(2);
                
            }
    }
    printf("ana menuye gonderiliyorsunuz...");sleep(2);
}

void havaleEFT()
{
    int miktar, iban;
    printf("havale yapilacak İBAN bilgisini giriniz");
    scanf("%d", &iban);
    printf("havale yapilacak miktar (TL) : ");
    scanf("%d", &miktar);
    printf("isleminiz gerceklestiriliyor... \n"); sleep(2);
    if(bakiye <miktar)
    {
        printf("yetersiz bakiye \n ");
    }
    else
    {
        bakiye-=miktar;
        printf("isleminiz gerceklesitiriliyor... \n");sleep(2);
        printf("Havale / EFT islemi basariyla gerceklestirildi \n");sleep(2);
    }
        printf("ana menuye yonlendiriliyorsunuz... \n");sleep(2);
}



int main (){
    int parola;
    int i=0;

    printf("sifrenizi giriniz: ");
    scanf("%d", &parola);
    while( parola != 1686)
    {
        printf("hatali sifre girdiniz sifrenizi giriniz ... ");
         scanf("%d",&parola);
         if(i==3)
         {
            printf("kartinizi kilitlenmistir \n ");
            printf("lutfen musteri hizmetleri ile iletisime geciniz");
         }
        i++;
    }
    printf("giris basarili ... \n "); sleep(2);


    srand(time(0));

    bakiye = rand() % 900 + 100;
    
    int secim;
    while(1){
        secim=menu();
        switch (secim)
        {
        case 1:
        paraCek();
            break;
        case 2: 
        paraYatir();
            break;
        case 3:
        faturaOde();
            break;
        case 4:
        havaleEFT();
            break;
       
        case 5:
            printf("lütfen kartinizi almayi unutmayin... \n "); return 0 ;
            
        default:
            printf("hatali secim yaptiniz ... \n");
            break;
        }
    }
}
