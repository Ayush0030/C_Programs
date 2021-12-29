#include<stdio.h>
int main(){
	int numb;
	scanf("%d",&numb);
	int x=0;
	int z=0;
	int ORIGINAL=numb;
	while(numb>0){
		x=numb%10;
		numb=numb/10;
		z=z+x*x*x;
		printf("%d ",x);	
	}
	printf("\n");
	printf("The Number after Cubing Each Digit is Z = %d\n",z);
	if(ORIGINAL==z){
		printf("Yes it is an ARMSTRONG NUMBER");
	}
	else
	printf("Not an Armstrong Number");
}

