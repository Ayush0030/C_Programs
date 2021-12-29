#include<stdio.h>
int main(){
int size,i;
int *p;
scanf("%d",&size);
int array[size];
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}

p=&array[0];

printf("\nThe Values in array using pointers is==>\n");

int counter=0;
while(counter<size){
	counter++;
	printf("%d ",*p);
	*p++;
	printf(" *p == %d ",*p);
}
}

