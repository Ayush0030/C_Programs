#include<stdio.h>
struct STUDENT{
	char name[100];
	char marks[100];	
};



int main(){
	int i;
	struct STUDENT S[5];
	
	for(i=0;i<5;i++){
		printf("Enter Details for Student %d\n",i+1);
		printf("Enter Name:");
		scanf("%s",&S[i].name);
		printf("\nEnter Marks\n");
		scanf("%s",&S[i].marks);
		printf("\n\n");		
	}
	
	for(i=0;i<5;i++){
		printf("Details for Student %d\n",i+1);
		printf("Name: %s",S[i].name);
		printf("\nMarks %s\n",S[i].marks);

		printf("\n\n");		
	}
	
}

