#include <iostream>  
using namespace std;
int main(){
	int numb;
	cin>>numb;
	
	int i;
	int j=0;
	for(i=2;i<=numb/2;i++){
		if(numb%i==0)
		j++;
		
	}
	if(j>0)
	cout<<"Not Prime";
	else
	cout<<"Prime";
}

