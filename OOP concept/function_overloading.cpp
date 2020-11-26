#include<iostream>
using namespace std;

int add(int a, int b)
{
	cout<<"Function 1 "<<endl;
	return(a+b);
}

double add(double a, double b)
{
	cout<<"Function 2"<<endl;
	return(a+b);
}

double add(int a ,double b)
{
	cout<<"Function 3"<<endl;
	return(a+b);
}

double add(double a, double b, double c)
{
	cout<<"Function 4"<<endl;
	return(a+b);
}

int main()
{
	cout<<"Addition is : "<<add(2,4)<<endl;
	cout<<"Addition is : "<<add(4.5,6.7)<<endl;
	cout<<"Addition is : "<<add(5,7.9)<<endl;
	cout<<"Addition is : "<<add(2.2,3.3,4.4)<<endl;
}
