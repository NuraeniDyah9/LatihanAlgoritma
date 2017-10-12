#include <stdio.h>
#include <conio.h>


int main(){
char words[100]="How,are,you,today";


int x=0;
while (words[x]!='\0'){
	if (words[x]==','){
		 words[x]='.';
   }
   printf("%c",words[x]);
    x++;
}

getch();
}

