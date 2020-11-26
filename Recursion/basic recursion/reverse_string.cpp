#include<iostream>
using namespace std;

void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string ros= s.substr(1);//iterating from 1st element
    reverse(ros);//recursion of next element
    cout<<s[0];

}
int main()
{
    reverse("Ansh");
}