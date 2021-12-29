#include<iostream>
using namespace std;
class methodoverloading{
	public:
		methodoverloading(){
			cout<<"Default Constructor";
		}
		
	int add(int a, int b){
		return a+b;
		
	}
	int add(int a, int b, int c){
		return a+b+c;
	}
	float add(int a, float c){
		return a+c;
	}
};
int main(){
	methodoverloading addittion;
	printf("\n%d\n",addittion.add(5,10));	
	printf("%d\n",addittion.add(5,10,15));
	printf("%.2f\n",addittion.add(9,2.98f));

//	addittion.add(5,3.5);
	

}

