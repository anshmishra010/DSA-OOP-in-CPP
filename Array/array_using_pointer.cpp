#include<iostream>
using namespace std;
class student
{
	int id;
	float per;
	public:
		void setdata(int a ,float b)
		{
			id=a;
			per=b;
		}
		void getdata(void)
		{
			cout<<"Student id "<<id<<endl;
			cout<<"Student percentage "<<per<<endl;
		}
};
int main()
{
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	student *ptr= new student[size];
	
	student *ptrTemp= ptr;
	int i,p;
	float q;
	for(i=0;i<size;i++)
	{
		cout<<"Enter the student id and percentage "<<i+1<<endl;
		cin>>p>>q;
	    ptr->setdata(p,q);
		ptr++;
	}
	for(i=0; i<size; i++)
	{
		cout<<"Student index "<<i+1<<endl;
		ptrTemp->getdata();
		ptrTemp++;
	}
	
}
