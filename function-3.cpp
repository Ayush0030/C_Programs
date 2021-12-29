#include<stdio.h>
int range(int,int, int);
int main(){
// 3 variable,
//  one number, one starting, one ending, 
// 2 variables check starting and ending point.
// function must return if the number is in range or not
int n,a,b;
scanf("%d",&n);
scanf("%d",&a);
scanf("%d",&b);
printf("%d",range(a,b,n));
}
int range(int a, int b, int n){
	if(n>=a&n<=b){
		return n;
	}
	else{
		return 0;
	}
}
