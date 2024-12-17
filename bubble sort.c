#include <stdio.h>
#include <stdlib.h>
//Bubble Sort
int main(){
 
    int sinir, gecici;
    int dizi[100];
    printf("Girilecek sayi adeti: ");
    scanf("%d", &sinir);  // Kaç adet sayı girileceği kullanıcıdan öğrenilir
 
    
    for(int i=0; i<sinir; i++){  //Kullanıcıdan sayılar alınır
        printf("%d)Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    //Alınan sayılar ekrana yazdırılır
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    printf("\n\n"); // sayılar yazdırıldıktan sonra 2 satır aşağı iner
    
    //Bubble sort algoritması (Küçükten büyüğe sıralama yapar)
    for(int i=0; i<sinir; i++){
        for(int j=0; j<sinir-1-i; j++){
            if(dizi[j] > dizi[j+1]){
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }
    //Dizinin sıralanmış halini ekrana yazdırır
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    
    printf("\n");
    system("pause");
    return 0;
}

