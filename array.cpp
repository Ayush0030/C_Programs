#include<stdio.h>
int main(){
	int i,j;
	char array[3][3]={{'\0','\0','\0'},{'\0','\0','\0'},{'\0','\0','\0'}};
	scanf("%d%d",&i,&j);
	array[i][j]='X';
	printf("%d %d",i,j);
	
	
	printf("%c",array[i][j]);
}

