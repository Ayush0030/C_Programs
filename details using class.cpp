#include<stdio.h>
#include<string.h>
class Student{
public:
	 		char name[100];
	 		int age;
	 		int phone_number;
//			void my_function(Student);	
	void my_function(Student ayush){
			printf("%s %d %d",ayush.name,ayush.age,ayush.phone_number);
}	
};
	
//void my_function(Student ayush){
//	printf("%s %d %d",ayush.name,ayush.age,ayush.phone_number);
//}
int main(){
	Student ayush;
	strcpy(ayush.name,"Ayush");
	ayush.age= 21;
	ayush.phone_number=111111;
	
	Student ayu;
	strcpy(ayu.name,"Ayu");
	ayu.age= 21;
	ayu.phone_number=111198611;
	
	ayush.my_function(ayush);
	ayu.my_function(ayu);
}

