#include<stdio.h>
//Printing Reverse Counting
int Sum(int);
int main(){
	int n;
	printf("Enter Number");
	scanf("%d",&n);
	Sum(n);
}
int Sum(int n){
	printf("%d\n",n);
	if(n==1){
	return n;
	}
	else{
		Sum(n-1);
	}
}

