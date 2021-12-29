#include<stdio.h>
//Input name contact age,
//DIsplay using Fucntion


struct Info{
	char name[100];
	long long int contact;
	int age;
};
//the below input function will be of "struct Info" Data Type




struct Info input(){
	struct Info X;		
	scanf("%s",&X.name);
	scanf("%lld",&X.contact);
	scanf("%d",&X.age);
	return X;
}

void display(struct Info Y){
	
	printf("n==%s c==%lld a==%d",Y.name,Y.contact,Y.age);	
} 

int main(){
	struct Info P1,P2;
	P1=input();
	printf("contact == %lld\n",P1.contact);
	display(P1);	
		
	P2=input();
	display(P2);	
}

