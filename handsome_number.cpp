#include<stdio.h>
int main(){
	int numb;
	scanf("%d",&numb);
	int x=0;
	int z=0;
	int flag=0;
	int k;
	int ORIGINAL=numb;
	while(numb>0){
		x=numb%10;
		if(flag==0){
		 k=x;
		}
		flag=1;
		numb=numb/10;		
		z=z+x;
		printf("%d  ",x);	
	}
	printf("\n Last Digit is K = %d\n",k);
	printf("Sum of all Digits is %d & without Last is  %d\n",z,z-k);
	
	if(z-k==k){
		printf("It is a Handsome Number");
	}
	else{
		printf("It is NOT a Handsome Number");

	}
	

}

