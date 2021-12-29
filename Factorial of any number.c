#include<stdio.h>
void Factorial(int);
int main(){
	int n;
	printf("Enter Number");
	scanf("%d",&n);
	
	Factorial(n);
		
	}

void Factorial(int n){
//	n*(n-1)*(n-2)*.....*1;
	int product=1;
	while(n>0){
    	product=product*n;
    	n--;

	}  
	printf("%d ",product);	

}
