#include<stdio.h>
int main(){
int i,j;
int height, width;
int greatest;
printf("Enter Size of Array\n");
printf("Enter Height\n");
scanf("%d",&height);
printf("Enter Width\n");
scanf("%d",&width);
int array[height][width];

	
	for(i=0;i<height;i++){
		for(j=0;j<width;j++){
			printf("Enter element for position %d,%d\n",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("The Resulant Array is below\n");
	
	greatest=array[0][0];

	for(i=0;i<height;i++){
		for(j=0;j<width;j++){	
			if(array[i][j]>greatest){
				greatest=array[i][j];
			}
		}
		printf("\n");
	}


	printf("The Greatest Element is %d",greatest);
	
	
	
}

