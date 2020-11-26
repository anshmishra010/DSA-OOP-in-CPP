#include<iostream>
using namespace std;
int part(int arr[],int s ,int e)
{
	int pivot=arr[e];
	int pindex= s;
	for(int i=s;i<e;i++)
	{
		if(arr[i]<pivot)
		{
			int temp=arr[i];
			arr[i]=arr[pindex];
			arr[pindex]=temp;
			pindex++;
		}
	}
	int temp =arr[e];
	arr[e]=arr[pindex];
	arr[pindex]=temp;
	return pindex;
}
void quicksort(int arr[], int s, int e) // s= start and e=end
{
	if(s<e)
	{
		int p= part(arr,s,e);
		quicksort(arr,s,(p-1));
		quicksort(arr,(p+1),e);
	}
}
int main()
{
	int size =0;
	cout<<"enter the size of array : "<<endl;
	cin>>size;
	int myarray[size];
	cout<<"enter "<<size<<"integer array in any order"<<endl;
	for(int i=0;i<size;i++)  //taking input of every element of array
	{
		cin>>myarray[i];
	}
	cout<<"before sorting "<<endl;
	for(int i=0;i<size;i++)  //printing the array before sorting
	{
		cout<<myarray[i]<<" ";
	}
	cout<<endl;
	quicksort(myarray,0,(size-1)); //start and end index and quick sort is called
	cout<<"after sorting"<<endl;
	for(int i=0;i<size;i++)  
	{
		cout<<myarray[i]<<" ";
	}
	return 0;
}
