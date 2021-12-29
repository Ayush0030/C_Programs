#include<iostream>
using namespace std;

class Details{
	int age;
	string name;
	
	public: 
	Details(int age2, string name2)
	{
		age=age2;
		name=name2;
	}
	int printage(){
		return age;
	}
	void printname(){
//		printf("%s",name);
	cout<<name;
	}	
};
int main(){
Details p1(10,"Sarthak");
printf("%d",p1.printage());
p1.printname();
}

