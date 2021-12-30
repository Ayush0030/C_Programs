#include<stdio.h>
int main(){
	int numb;
	int n1,n2,n3;
	printf("Enter a Three Digit Number ");
	scanf("%d",&numb);

	if(numb>0){
		n1=numb/100;
		n2=(numb-(n1*100))/10;
		n3=numb-(n1*100+n2*10);
		
		printf("The Original Number is %d\n",numb);
		printf("\n");
		printf("N1 == %d\n",n1);
		printf("N2 == %d\n",n2);
		printf("N3 == %d\n",n3);
		printf("\n");
		printf("The reversed number is %d",n3*100+n2*10+n1);
		
	}
	
}
