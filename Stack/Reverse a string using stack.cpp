#include<iostream>
#include<stack>
using namespace std;

void res(string s)
{
    stack<string> st;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        string word = "";
        while(s[i]!=' ' && i<len)
        {
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"\n";


}
int main()
{
    string s = "Hello , my name is ansh";
    res(s);
    return 0;

}