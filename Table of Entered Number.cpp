#include<stdio.h>
int main(){
	int numb;
	int i=1;
	scanf("%d",&numb);
	for(i=1;i<=10;i++){
		printf("%d x %d = %d\n",numb,i,numb*i);
	}
}
