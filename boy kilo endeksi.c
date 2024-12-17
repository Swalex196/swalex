/* 19'dan küçükse zayıf
[19-25) normal
[25-30) fazla
30 ve 30+ dikkat edilmesi gerekiyor.
*/
#include<stdio.h>
int main(){
	int kilo,cm;
	float boy,bki;
	printf("Kilonuzu giriniz:");
	scanf("%d",&kilo);
	printf("boyunuzu giriniz cm cinsinden:");
	scanf("%d",&cm);
	boy=cm/100.00;
	bki=kilo/(boy*boy);
	if(bki<19)
		printf("Zayif kategorisi, dilerseniz kilo alabilirsiniz. BKI= %f",bki);
	else if(bki<25)
		printf("Normal kategorisi, kilonuzu koruyabilirsiniz. BKI= %f",bki);
	else if(bki<30)
		printf("İdeal kilonuz için dikkat etmelisiniz. BKI= %f",bki);
	else
		printf("Kilonuza ve egzersizlerinize dikkat etmelisiniz. BKI= %f",bki);
	getch();
	return 0;
}
