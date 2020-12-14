#include<iostream>
using namespace std;
//In this question there are n ring in a tower and there are 3 towers and you have to shift from first tower to last tower and the rings present in the tower is of increasing size and only in this format the changing of tower place and at a time single ring can be taken out.
void toh(int n, char src, char dest,char help)
{
    if(n==0)
    {
        return;
    }
    toh(n-1,src,help,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    toh(n-1,help,dest,src);

}
int main()
{
    toh(3,'A','C','B');
}