#include<stdio.h>
int main(){
	int numb;
	scanf("%d",&numb);
	
	int i;
	int j=0;
	for(i=2;i<=numb/2;i++){
		if(numb%i==0)
		j++;
		
	}
	if(j>0)
	printf("Not Prime");
	else
	printf("Prime");
}

