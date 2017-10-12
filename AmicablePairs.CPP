#include <stdio.h>
#include <conio.h>

main(){

int num[300][300];
int sum[300];
int x;

for (int i=1;i<=300;i++){
   printf ("%d: ",i);
   x=0;
	for (int j=1;j<=i;j++){
           if (i%j==0 && i!=j){
           		num[i-1][j-1]=j;
               printf ("%d ",num[i-1][j-1]);
               x=x+num[i-1][j-1];
           }


   }
   sum[i-1]=x;
	printf ("==> %d",sum[i-1]);
   printf ("\n");

}

for (int i=0;i<300;i++){
    for (int j=0;j<i;j++){
         if (sum[i]==j+1){
         	printf ("%d %d",sum[i],j+1);
         }
    }
    printf("\n");
}

getch();

}
