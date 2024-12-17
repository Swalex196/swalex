#include<stdio.h>
int main(){
	float mySayi=4.6;
	printf("%f \n",mySayi);
	printf("%.1f \n",mySayi);
	printf("%.2f \n",mySayi);
	printf("%.4f \n",mySayi);
	return 0;
}
Kareleri farkını bulan uygulama
#include<stdio.h>
int main(){
	int a,b;
	printf("Ilk sayiyi giriniz:");
	scanf("%d",&a);
	printf("\nIkinci sayiyi giriniz:");
	scanf("%d",&b);
	printf("\nSayilarin kareleri farki: %d",a*a-b*b);
	return 0;
}
