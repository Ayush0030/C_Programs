#include<stdio.h>
int main(){
	int base,power;
	printf("Enter BASE Number  ");
	scanf("%d",&base);
	printf("Enter POWER  ");
	scanf("%d",&power);
	
	int i,output=1;
	
	while(i<power){
		 output=output*base;
		 i++;
	}
	printf("%d ^ %d == %d",base,power,output);
	
}

