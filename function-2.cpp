#include<stdio.h>
int sum(int,int);
void square(int);
int main(){
//	2 value from user
//return sum
//result in other function (if less than 50 return square , else print greater than fifty)
int i,j,result;
printf("enter 2 numbers");
scanf("%d%d",&i,&j);
result=sum(i,j);
square(result);
}  


int sum(int i, int j){
	return i+j;
    }
void square(int result){
	if(result<=50)
	printf("%d",result*result);
	
	else
	printf("Number Greater than 50");
}
