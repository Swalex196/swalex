#include<stdio.h>
int main(){
	int s1,s2,s3;
	printf("Birinci sayiyi giriniz:");
	scanf("%d",&s1);
	printf("Ikinci sayiyi giriniz:");
	scanf("%d",&s2);
	printf("Ucuncu sayiyi giriniz:");
	scanf("%d",&s3);
	if(s1>s2){
		if(s1>s3)
			printf("En buyuk sayi : %d",s1);
		else
			printf("En buyuk sayi : %d",s3);
	}
	else{
		if(s2>s3)
			printf("En buyuk sayi : %d",s2);
		else
			printf("En buyuk sayi : %d",s3);
	}
	getch();
	return 0;
