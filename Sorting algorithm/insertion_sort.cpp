#include<iostream>
using namespace std;

void insertion_sort(int *a,int n)
{
	int key;
	int j=0;
	for(int i=0;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	
	
}
int main()
{
	int n;
	cout<<" enter number of elements you wamt in ur array  "<<endl;
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter the n element in any way "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Array before sorting "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	insertion_sort(arr,n);
	cout<<"\nArray after the sorting "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
