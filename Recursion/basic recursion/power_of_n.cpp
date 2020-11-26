#include<iostream>
using namespace std;
int power(int n, int p)
{
    if(p==0) //base case
    {
        return 1;
    }
    int prevpower= power(n,p-1);
    return n*prevpower;
}
int main()
{
    int n,p;
    cout<<"enter n and p"<<endl;
    cin>>n>>p;

    cout<<power(n,p);
}