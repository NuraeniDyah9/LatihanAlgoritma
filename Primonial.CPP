#include <conio.h>
#include <stdio.h>


int main(){
long prime[100],div[100];
long a,b=0,c;

for (int x=1;x<=100;x++){
	a=0;
	for (int y=1;y<=x;y++){
   	if (x%y==0){
           a++;
      }
   }
   prime[b]=x;
   div[b]=a;
   b++;
}
a=1,c=0;

for (int i=0;i<=b;i++){
	if (div[i]==2){
		prime[c]=prime[i];
      c++;
   }

}

for (int x=0;x<=c;x++){
	a=a*prime[x];
	printf("Primonial %d  = (%d) \n",x+1,a);
}

getch();

}