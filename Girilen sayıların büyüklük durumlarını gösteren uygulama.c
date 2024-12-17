#include<stdio.h>
int main(){
	int sayi1,sayi2;
 	printf("İki sayi giriniz:");
 	scanf("%d%d",&sayi1,&sayi2);
 	if(sayi1>sayi2){
 		printf("%d sayi 1 buyuktur",sayi1);
	 }
	 else if (sayi2>sayi1){
	 	printf("%d sayi 2 buyuktur",sayi2);
	 }
	 else{
	 	printf("sayilar esittir");
	 }
