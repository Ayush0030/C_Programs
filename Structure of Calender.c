#include<stdio.h>
struct Calender{
	int day;
	int month;
	int year;
};
int main(){
	struct Calender date,date2;
	date.day=21;
	date.month=12;
	date.year=2000;
	
	date2.day=1;
	date2.month=11;
	date2.year=1111;
	
	printf(" Value of Day == %d\n",date.day);
		
	printf(" Value of Month == %d\n",date.month);
		
	printf(" Value of Year == %d\n",date.year);
		
	printf(" Value of Day == %d\n",date2.day);
		
	printf(" Value of Month == %d\n",date2.month);
		
	printf(" Value of Year == %d\n",date2.year);
	
	return 0;
}

