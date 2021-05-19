#include<bits/stdc++.h>
using namespace std;

// we have to find at the given pos which bit is given
int getbit (int n , int pos)
{
    // we will use left shift operator by one 
    return ((n & (1<<pos)) != 0);
}
// we have to set 1 at the given pos , set =1 and unset =0
int setbit(int n , int pos)
{
    //we will use left shift op and use OR
    // | is a binary OR operator
    // || is a logical OR operator
    return (n | (1<<pos));
}
//on the given pos we have to clear the bit or make it zero
int clear(int n , int pos){

    int mask = ~(1<<pos);
    return (n&mask);
}
int main()
{
    cout<<getbit(5,2)<<endl;
    cout<<setbit(5,1)<<endl;
    cout<<clear(5,2);
    return 0;
}

