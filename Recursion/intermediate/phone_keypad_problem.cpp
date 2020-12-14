#include<iostream>
using namespace std;

string keypadarr[]={"","","abc","def","ghi","jkl","mno","pqr","stw","qyz"}; //phone keypad
void keypad(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0]; //
    string code=keypadarr[ch-'0']; //converts into string 
    string ros =s.substr(1);
    for(int i=0;i<code.length();i++)
    {
        keypad(ros,ans+code[i]);
    }


}

int main()
{
    keypad("23","");
    return 0;
}

//for more varification view apna college yt channel , 7 hard problem on recursion.