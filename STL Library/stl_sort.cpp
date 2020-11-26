
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void show(int a[],int array_size)
{
    for(int i=0;i<array_size;++i)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int asize= sizeof(a)/sizeof(a[0]);
    cout<<"Size of the array "<<asize<<endl;

    cout<<"Array before sorting "<<endl;
    show(a,asize);

    sort(a,a+asize);
    cout<<"\narray of after sorting "<<endl;
    show(a,asize);
}