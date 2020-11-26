#include<iostream>
using namespace std;
void shell_sort(int ar[],int n)
{
	for(int gap=n/2;gap>0; gap/= 2)
	
	{
		for(int j=gap;j<n;j+=1)
		{
			int temp = ar[j];
			int i=0;
			for(i=j;(i>=gap)&&ar[i-gap]>temp;i=i-gap)
			{
				ar[i]=ar[i-gap];
			}
			ar[i]=temp;
			
		}
		
	}
}
int main()
{
	int n;
	cout<<"Enter the number of elements you want in your array "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements which you want to enter "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nArray before sorting "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	shell_sort(arr,n);
	cout<<"\nArray after sorting array using shell sort "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
	
}
