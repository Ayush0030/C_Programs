#include<stdio.h>
int main(){

	int i,j;
	int flag ;
	for(j=10;j<=30;j++){
		flag=0;
		for(i=2;i<=j/2;i++){
			if(j%i==0)
				flag=1;
			
			}
		if(flag==0)
		printf("%d\n",j);
	}
	
}

