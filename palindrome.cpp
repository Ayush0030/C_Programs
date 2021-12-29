#include<stdio.h>
int main(){
	int numb=121;
	int n1,n2,n3;
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
		printf("The reversed number is %d\n",n3*100+n2*10+n1);
		int x=n3*100+n2*10+n1;
		if(x==numb)
		printf("Yes it is a Palindrome as x = %d, numb=%d & x==numb",x,numb);

		
	}
}

