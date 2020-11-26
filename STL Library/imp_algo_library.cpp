#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the size of vector you want"<<endl;
    cin>>a;
    int arr[a];
    cout<<"Enter the vector "<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
   //int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr,arr+a);
    cout<<"Vector is "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<vect[i]<<" ";
    }
    sort(vect.begin(),vect.end());
    cout<<"\nVector after sorting "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<vect[i]<<" ";
    }

    reverse(vect.begin(),vect.end());
    cout<<"\nReversed vector "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<"\nMaximum element "<<endl;
    cout<<*max_element(vect.begin(),vect.end());
    cout<<"\nMinimum element "<<endl;
    cout<<*min_element(vect.begin(),vect.end());

    cout<<"\nSum of all the elements in vector is "<<endl;
    cout<<accumulate(vect.begin(),vect.end(),0);
    return 0;

}