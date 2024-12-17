#include <stdio.h>
#include <stdlib.h>

int main() {
  int s1, s2;
  char islem;
  
  printf("işlem yapacağınız birinci sayıyı giriniz : ");
  scanf("%d", &s1);
  printf("yapacağınız işlemi seçiniz[ +,-,*,/]: ");
  scanf(" %c",&islem);
  printf("işlem yapacağınız ikinci sayıyı giriniz: ");
  scanf("%d", &s2);
  switch(islem){
    case '+': printf("işlem sonucu: %d", (s1+s2));
    break;
    case '-': printf("işlem sonucu: %d", (s1-s2));
    break;
    case '*': printf("işlem sonucu: %d", (s1*s2));
    break;
    case '/': 
    if (s2 != 0) {
    float sonuc = (double)s1 / s2; 
    printf("İşlem sonucu: %f \n",sonuc); 
  } 
    else {
    printf("Bir sayıyı sıfıra bölemezsiniz.\n");
  }
    break;
    default : printf("hatalı işlem türü girdiniz");
    break;
  }
    return 0;

  }
