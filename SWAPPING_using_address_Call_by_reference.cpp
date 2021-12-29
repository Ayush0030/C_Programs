#include<stdio.h>
//Call by Reference
//Here we pass the address of a, i.e means the complete a into the function rather than the value.
void Swapping(int*,int*);
int main(){
	int a,b;
	printf("Enter 2 Numbers to Swap");
	scanf("%d %d",&a,&b);

	Swapping(&a,&b);
	printf("INSIDE MAIN a == %d, b == %d",a,b);

}
void Swapping(int *p, int *q)
{
	*p=(*p)*(*q);
	*q=(*p)/(*q);
	*p=(*p)/(*q);
	printf("a == %d, b == %d\n",*p,*q);
}
