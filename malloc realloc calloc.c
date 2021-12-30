#include<stdio.h>
#include<stdlib.h>
// "Malloc" "Realloc" "Calloc" all three
void main(){
	
	int i;
	int *ptr;
	int *ptr2;
	printf("Enter Number of elements\n");
	int n,a,b;
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	} 
	
	for(i=0;i<n;i++){
		printf("%d \t",ptr+i);
		printf("%d \n",*(ptr+i));
	} 
	
	printf("Enter New Blocks to be added\n %d",n);
	scanf("%d",&a);
	ptr=(int*)realloc(ptr,a);
	
	for(i=n;i<n+a;i++){
		scanf("%d",ptr+i);
	} 
	
	printf("The All Elements after Realloc \n");
	for(i=0;i<n+a;i++){
		printf("%d \t",ptr+i);
		printf("%d \n",*(ptr+i));
	} 
//	Calloc Below
	printf("Enter Number of Elements for Calloc\n");
	
	scanf("%d",&b);
	
	ptr2=(int*)calloc(b,sizeof(int));
	
	for(i=0;i<b;i++){
		scanf("%d",ptr2+i);	
	}
	for(i=0;i<b;i++){
		printf("%d \t",ptr2+i);
		printf("%d \n",*(ptr2+i));
	}
		
}

