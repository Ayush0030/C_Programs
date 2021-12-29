#include<iostream>
using namespace std;
int Factorial(int);
int main(){
	int n;
	cout<<"Enter Number";
	cin>>n;
	cout<<Factorial(n);
}
int Factorial(int n){
	if(n-1>0){
		cout<<n<<endl;
		return n * Factorial(n-1);
	}
	else{
		return n;

	}

	
	

}

