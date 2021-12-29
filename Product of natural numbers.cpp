#include<stdio.h>
int main(){
	int n;
	int x=1;
	int last;
	scanf("%d",&last);
	for(n=1;n<=last;n++){
		printf("%d\n",n);
		x*=n;
	}
	printf("%d",x);
}
