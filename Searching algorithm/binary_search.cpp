#include<iostream>
using namespace std;
int binarysearch(int arr[],int left,int right,int x)
{
	while(left<right)
	{
		int mid=left+(right-left)/2;
		if(arr[mid]==x)
		{
			return mid;
		}
		else if(arr[mid]<=x)
		{
			left =mid+1;
	
		}
		else
		{
			right =mid+1;
		}
	}
	return -1;
}
int main()
{
	int myarr[5];
	int num;
	int output;
	cout<<"Enter five array in the ascending or sorted manner in the array "<<endl;
	
	for(int i=0;i<5;i++)
	{
		cin>>myarr[i];
	}
	cout<<"Enter the element which you want to search "<<endl;
	cin>>num;
	output=binarysearch(myarr,0,4,num);
	
	if(output==-1)
	{
		cout<<"The entered element is not found "<<endl;
	}
	else
	{
		cout<<"Element found "<<output<<endl;
	}
	
	return 0;
}
