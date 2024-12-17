#include<stdio.h>
int main(){
	int saat;
	float ucret,toplam_ucret;
	char kullanici_harf;
	printf("Kullanicinin bas harfi:");
	scanf("%c",&kullanici_harf);
	printf("\nKac saat calisti:");
	scanf("%d",&saat);
	printf("\nSaat ucreti:");
	scanf("%f",&ucret);
	toplam_ucret=saat*ucret;
	printf("\nBas harfi %c olan calisanin toplam ucreti %f kadardir.",kullanici_harf,toplam_ucret);
	return 0;
}
