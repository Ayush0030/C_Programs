#include<stdio.h>
// decleration function
int function(int);

int main(){
	int i,result;	
	scanf("%d",&i);	
	result=function(i);	
	printf("%d",result);
}
int function(int i){
	return i*i;
	
}

