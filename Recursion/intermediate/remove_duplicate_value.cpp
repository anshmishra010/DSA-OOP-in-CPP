#include<iostream>
using namespace std;
string removed(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch= s[0]; //storing first element
    string ans = removed(s.substr(1));//recursive call 
    if(ch==ans[0]) //if srtored value is equal to next element
    {
        return ans;
    }
    return ch+ans;
}
int main()
{
    cout<<removed("aabbbbbcdeeef")<<endl;
}