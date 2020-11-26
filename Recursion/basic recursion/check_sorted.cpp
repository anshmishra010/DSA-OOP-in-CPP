#include<iostream>
using namespace std;
bool sort(int arr[],int n)
{
    if(n==1) //base class
    {
        return 1;
    }
    bool rarray=sort(arr+1,n-1); //recursion
    return (arr[0]<arr[1] && rarray); //checking sorted array
}
int main()
{
    int n;
    cout<<"Enter size "<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sort(arr,n);
}