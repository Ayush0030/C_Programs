#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=9;j++){
			if(j==6-i||j==4+i||i==3&&(j>3&&j<7))
			printf("*");
			else
			printf(" ");
			
			
		}
		printf("\n");
	}
	
	printf("-----------");
	printf("\t");
	
		for(i=1;i<=5;i++){
		for(j=1;j<=9;j++){
			if(j==6-i||j==4+i||i==3&&(j>3&&j<7))
			printf("*");
			else
			printf(" ");
			
			
		}
		printf("\n");
	}
}

