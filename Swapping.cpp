#include<stdio.h>
int main(){
	int a=20;
	int b=30;
	
	int temp;
	
	temp=b;
	b=a;
	a=temp;
	
	printf("Value of a is %d\n",a);
	printf("Value of b is %d",b);

}

