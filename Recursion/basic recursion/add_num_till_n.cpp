#include<iostream>
using namespace std;
int sum(int n)
{
    
    if(n==0) //base class
    {
        return 0;
    }
    // int prevsum= sum(n-1);
    // return n+prevsum;

    // we can do by line num 10 & 11 and we will comment line 14 then also it will fine.
     return n+sum(n-1); //recursion happening
}
int main()
{
    int n;
    cout<<"Enter the num which sum you want "<<endl;
    cin>>n;

    cout<<"The sum is "<<sum(n);
}