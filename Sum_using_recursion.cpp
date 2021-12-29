#include<stdio.h>
//Printing Reverse Counting
int Sum(int);
int main(){
	int n;
	printf("Enter Number");
	scanf("%d",&n);
	printf("%d",Sum(n));
}
int Sum(int n){
	if(n>0){
		return n + Sum(n-1);
	}
	else{
		return n;

	}

	
	
}

