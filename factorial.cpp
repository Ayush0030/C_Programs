//factorial
#include<stdio.h>
int main(){
	int numb;
	scanf("%d",&numb);
	int n;
	n=numb;
	int z=1;
	if(numb>0){	
		while(n-1>0){	
		z=z*n*(n-1); //20
		n=n-2;
		}
		printf("%d",z);
	}
	else
	printf("0");
}

