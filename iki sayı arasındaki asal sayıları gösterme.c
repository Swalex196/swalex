#include <stdio.h>
#include <math.h>


int main() {
int x, y;
int i, j;

printf("bir x sayısı girin:  ");
scanf("%d",&x);
printf("bir y sayısı girin:  ");
scanf("%d",&y);
for(i=x; i<=y; i++)  {
        int asal=1;
       
       for(j=2; j<i; j++)
       {
           
            if(i%j==0)
            {
            asal = 0;
            break;
            }
       }
    
    if(asal == 1)
    {
        printf("%d \n", i);
    }
    }
return 0;
}
