#include<stdio.h>
int main(){
	int exp;
	scanf("%d",&exp);
	if(exp>=5000){
		exp-=exp*0.20;
		printf("%d is the amount to be paid",exp);
	}
	else if(exp>=4000){
		exp=exp-exp*0.15;
		printf("%d is the amount to be paid",exp);
	}
	else if(exp>=3000){
		exp=exp-exp*0.10;
		printf("%d is the amount to be paid",exp);
	}

	else if(exp>=2500){
		exp=exp-exp*0.05;
		printf("%d is the amount to be paid",exp);		
		
	}	
	else
	printf("No Discount");

		
	
}
