#include<stdio.h>
int main(){
int i,j;
int heightA, widthA;


printf("Enter Size of Array\n");
printf("Enter Height of A MATRIX\n");
scanf("%d",&heightA);
printf("Enter Width of A MATRIX\n");
scanf("%d",&widthA);
int arrayA[heightA][widthA];
int arrayB[heightA][widthA];


	
	for(i=0;i<heightA;i++){
		for(j=0;j<widthA;j++){
			printf("Enter element for MATRIX A position %d,%d\n",i,j);
			scanf("%d",&arrayA[i][j]);
		}
	}
	
		printf("The Resulant Matrix A is below\n");
	
	for(i=0;i<heightA;i++){
		for(j=0;j<widthA;j++){
			printf("%d",arrayA[i][j]);
		}
		printf("\n");
	}
	

printf("B MATRIX:\n");



	
	for(i=0;i<heightA;i++){
		for(j=0;j<widthA;j++){
			printf("Enter element for MATRIX B position %d,%d\n",i,j);
			scanf("%d",&arrayB[i][j]);
		}
	}
	

	
		
	printf("The Resulant Matrix B is below\n");
	
	for(i=0;i<heightA;i++){
		for(j=0;j<widthA;j++){
			printf("%d",arrayB[i][j]);
		}
		printf("\n");
	}
	
			
	printf("The Sum of both Matrix is below\n");
	

	for(i=0;i<heightA;i++){
		for(j=0;j<widthA;j++){
			printf("%d ",arrayB[i][j]+arrayA[i][j]);
		}
		printf("\n");
	}
	
}

