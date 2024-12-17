#include <stdio.h>
#include <math.h>


int main() {
int x, y;
double hipo;
    
    printf("birinci kenarı giriniz");
    scanf("%d",&x);
    printf("ikinci kenarı giriniz");
    scanf("%d", &y);
    hipo = sqrt((x*x)+(y*y));
    printf("hipotenüs değeriniz : %.2f", hipo);
    return 0;
    
}
