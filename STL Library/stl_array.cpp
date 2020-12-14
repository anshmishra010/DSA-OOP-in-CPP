#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,5> arr1 = {3,5,2,1,9};
    array<int,5> arr2 = {3,9,5,3,7};
    array<string,2> arr3 = {{string("he"),"ae"}};

    cout<<"Size of the array "<<endl;
    cout<<arr1.size()<<endl; // gives the size of array
    cout<<arr2.size()<<endl;
    cout<<arr3.size()<<endl;

    cout<<"inital array 1: "<<endl;
    for(auto i : arr1){  //to print any type of array
        cout<<i<<' ';
    }

    sort(arr1.begin(), arr1.end()); //bracket contains starting and the end points to sort

    cout<<"\nSorted array 1 : "<<endl;
    for(auto i: arr1){
        cout<<i<<" ";
    }
    

    cout<<"\ninital array 2: "<<endl;
    for(auto i : arr2){
        cout<<i<<' ';
    }
    arr2.fill(5);
    cout<<"\nFilled array 2 is "<<endl;
    for(auto i : arr2){
        cout<<i<<' ';
    }

    cout<<"String : "<<endl; 

    for(auto i : arr3){
        cout<<i<<' ';
    }
}