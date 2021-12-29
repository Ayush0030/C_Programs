#include<stdio.h>
#include<conio.h>

void main(){
	
	int i;
	int *ptr;
	printf("Enter Number of elements\n");
	int n;
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	} 
	
	for(i=0;i<n;i++){
		printf("%d ",ptr+i);
	} 
	
		
}

