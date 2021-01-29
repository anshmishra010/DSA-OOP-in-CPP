#include<iostream>
using namespace std;
int main(){
    int arr[6],i,elem;
    cout<<"Enter 5 elements "<<endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be inserted"<<endl;
    cin>>elem;
    arr[i]=elem;
    for(i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}