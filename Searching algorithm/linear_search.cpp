#include<iostream>
using namespace std;
void linear_search(int a[],int n)
{
	int temp=-1;
	for(int i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			cout<<"Element found at index location "<<i+1<<endl;
			temp=0;
			
		}
	}
	if(temp==-1)
	{
		cout<<"Element not found in the array "<<endl;
	}
}

int main()
{
	int num;
	int arr[5]={1,2,5,8,9};
	cout<<"Enter the array to be find "<<endl;
	cin>>num;
	
	linear_search(arr,num);
	return 0;
	

}

