#include<stdio.h>
int main(){
 int sayi;
 printf("Bir sayi giriniz:");
 scanf("%d",&sayi);
 if(sayi>0){
 	printf("%d sayisi pozitiftir",sayi);
 }
 else{
 	printf("%d sayisi negatiftir",sayi);
 }
	return 0;
}
