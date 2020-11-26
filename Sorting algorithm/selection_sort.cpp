#include<iostream>
using namespace std;
void selection_sort(int a[])
{
	
	for(int i=0;i<5-1;i++)
	{
		int min=i;
		for(int j=j+1;j<5;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp= a[min];
			a[min]=a[i];
			a[i]=temp;
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
	selection_sort(myarr);
	cout<<"\nArray after sorting "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<myarr[i]<<" ";
	}
	return 0;
}
