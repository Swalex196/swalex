#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi, j, i, tektoplam=0, cifttoplam=0;
    printf("girmek istediğiniz sayı adedi: ");
    scanf("%d", &j);
    for(i=0; i<j;i++)
    {
        printf("sayi : ");
        scanf("%d", &sayi);
        if(sayi%2==0){
            cifttoplam+=sayi;
        }
        else
        tektoplam+=sayi;
    }
    
    printf("girdiğiniz çift sayıların toplamı: %d\n", cifttoplam);
    printf("girdiğiniz tek sayıların toplamı: %d", tektoplam);
    
    return 0;
  }
