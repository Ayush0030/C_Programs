#include<stdio.h>
int Sum(int);
int main(){
	int n;
	printf("Enter Number");
	scanf("%d",&n);
	printf("%d",Sum(n));
}
int Sum(int n){
	if(n>0){
				printf("%d\n",n);

		return n + Sum(n-1);
	}
	else{
		return n;

	}

	
	

}

