#include<iostream>
using namespace std;

class Complex
{
	private :
		int a,b;
	public :
		void setData(int x,int y){
			a=x; b=y;
		}
		void showData(){
			cout<<"\na= "<<a<<"\nb= "<<b;
		}
		Complex add(Complex p)
		
		{
			Complex temp;
			
			temp.a   =  a+p.a;
			temp.b   =  b+p.b;
			return(temp);
		}
};
//void Complex::add(complex , complex c2)
int main()
{
	Complex c1,c2,c3;
	c1.setData(5,8);
	c1.showData();
	c2.setData(13,52);
	c2.showData();
	c3=c1.add(c2);
	c3.showData(); 
}
