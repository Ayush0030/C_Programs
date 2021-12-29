#include<stdio.h>
int main(){
//	1-D Array

int size,i,index,new_number;
int array[100];
printf("Enter Size of Array");
scanf("%d",&size);
printf("Enter Array Elements\n");
for(i=0;i<size;i++){
	scanf("%d",&array[i]);
}
for(i=0;i<size;i++){
	printf("[%d]",array[i]);
}	
printf("Enter index to Insert Number\n");
scanf("%d",&index);
printf("Enter Number to be Inserted\n");
scanf("%d",&new_number);
printf("New Number to be Entered is %d\n",new_number);

for(i=size;i>index;i=i-1){
	array[i]=array[i-1];
}
array[index]=new_number;

printf("The New Array After Insertion is\n");

for(i=0;i<=size;i++){
	printf("[%d]",array[i]);
}	
		
//int i,j;
//int height, width;
//int index_row,index_col;
//printf("Enter Size of Array\n");
//printf("Enter Height\n");
//scanf("%d",&height);
//printf("Enter Width\n");
//scanf("%d",&width);
//int array[height][width];
//
//	
//	for(i=0;i<height;i++){
//		for(j=0;j<width;j++){
//			printf("Enter element for position %d,%d\n",i,j);
//			scanf("%d",&array[i][j]);
//		}
//	}
//	
//	printf("The Resulant Array is below\n");
//	
//
//	for(i=0;i<height;i++){
//		for(j=0;j<width;j++){	
//			printf("%d ",array[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	
//	printf("Enter Exact index position for insertion");
//	scanf("%d %d",&index_row,&index_col)
//	
//	
	
}

