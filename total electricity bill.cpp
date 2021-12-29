//WAP to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill
#include<stdio.h>
int main(){
	int unit;
	scanf("%d",&unit);
	int charges=0;
	int total;

	if(unit>250){
		charges=charges+0.5*(50)+.75*(100)+1.2*(100)+1.5*(unit-250);
	}
	else if(unit>150){
		charges=charges+0.5*(50)+.75*(100)+1.2*(unit-150);
		}
	else if(unit>50){
		charges=charges+0.5*(50)+.75*(unit-50);
		}
	else
		charges=charges+0.5*(50);
	
//	charges=charges+.2*charges;
//	printf("%d\n",charges);
	printf("%f",charges+0.2*charges);

}

