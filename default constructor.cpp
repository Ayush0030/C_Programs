/*In C++, the explicit keyword is used to instruct the compiler that a constructor 
should be used only if the types of the arguments passed to it match exactly 
the types of the arguments of its definition. 
That is, no implicit conversion can be used. */

#include<iostream>
using namespace std;

class Const { //class Const
	int id;
	string name;
	
	public:
        //default constructor
	Const(){
     	cout<<"default constructor";
	}

	Const(int id1, string name1){
		id = id1;
		name = name1;
	}

	int getId(){
		return id;
	}
	
	void display(){
		cout<<id<<name<<endl;
	}
	
	string getName(){
		return name;
	}
};

int main(){
	Const obj(100,"hello");
	cout<<obj.getId()<<endl;
	
	obj.display();
	
	cout<<obj.getName()<<endl;
}
