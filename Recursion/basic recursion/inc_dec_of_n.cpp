#include<iostream>
using namespace std;
void dec(int n)
{
    if(n==1) //base condition
    {
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl; //printing first then calling again
    dec(n-1);
}
void inc(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);//printing calling then printing again
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    dec(n);
    cout<<"\n";
    inc(n);

}