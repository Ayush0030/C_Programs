#include<stdio.h>
int main(){
	int numb;
	int remainder;
	int reverse=0;
	scanf("%d",&numb);
	do{
		remainder=numb%10;
		reverse=reverse*10+remainder;
		numb=numb/10;
	}while(numb>0);

printf("%d",reverse);
}
