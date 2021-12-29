#include<stdio.h>
int Factorial(int);
int main(){
	int n;
	printf("Enter Number");
	scanf("%d",&n);
	printf("%d",Factorial(n));
}
int Factorial(int n){
	if(n-1>0){
		printf("%d\n",n);
		return n * Factorial(n-1);
	}
	else{
		return n;

	}

	
	

}

