#include<iostream>
using namespace std;

class complex
{
	int real;
	int imag;
	public:
		complex()
		{
			real=0;
			imag=0;
		}
		complex(int r ,int i)
		{
			real= r;
			imag=i;
		}
		
		void getdat()
		{
			cout<<"\nEnter the real part "<<endl;
			cin>>real;
			cout<<"Enter the imag part "<<endl;
			cin>>imag;
		}
		
		void showdata()
		{
			cout<<"Entered data = "<<real<<" + "<<imag<<"i"<<endl;
		}
		
		void print()
		{
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
		
		complex operator +(complex c)
		{
			complex temp;
			temp.real=real+c.real;
			temp.imag=imag+c.imag;
			return temp;
		}
};

int main()
{
	complex c1;
	c1.getdat();
	c1.showdata();
	complex c2;
	c2.getdat();
	c2.showdata();
	complex c3;
	c3.getdat();
	c3.showdata();
	
	complex c4;
	
	c4=c1+c2+c3;
	c4.print();
	
	
}
