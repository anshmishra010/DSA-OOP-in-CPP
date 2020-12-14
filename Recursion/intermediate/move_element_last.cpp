#include<iostream>
using namespace std;

string mov(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=mov(s.substr(1));
    if(ch=='x')
    {
        return ans+ch;// adding elements to the last
    }
    return ch+ans;
}

int main()
{
    cout<<mov("xxxxxxxxxhdfdjh");
    return 0;
}