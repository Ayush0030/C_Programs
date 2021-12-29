#include<stdio.h>
//Call by Value
//Here Original a , b donot change as only their value changes.
//Function Swaps Just the Value but the Orginal a and b are not changed
void Swapping(int,int);
int main(){
	int a,b;
	printf("Enter 2 Numbers to Swap");
	scanf("%d %d",&a,&b);
	Swapping(a,b);
	printf("INSIDE MAIN a == %d, b == %d",a,b);

}
void Swapping(int a, int b)
{
	a=a*b;
	b=a/b;
	a=a/b;
	printf("a == %d, b == %d\n",a,b);
}
