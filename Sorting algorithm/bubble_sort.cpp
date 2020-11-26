#include<iostream>
using namespace std;
void bubble_sort(int a[])
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<(5-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				int temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int myarr[5];
	cout<<"Enter the 5 integers in any form "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>myarr[i];
	}
	cout<<"\nArray before sorting "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<myarr[i]<<" ";
	}
	bubble_sort(myarr);
	cout<<"\nArray after sorting "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<myarr[i]<<" ";
	}
	return 0;
}
