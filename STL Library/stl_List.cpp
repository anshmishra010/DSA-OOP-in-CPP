//Lists are sequence containers that allow non-contiguous memory allocation.Normally, when we say a List, we talk about doubly linked list
#include<bits/stdc++.h>
using namespace std;

void showlist(list <int> g)
{
    list <int> ::iterator it;
    for(it=g.begin(); it!=g.end();++it)
    {
        cout<<'\t'<<*it;
    }
    cout<<'\n';
}
int main()
{
    list <int> list1,list2;
    for(auto i=0;i<10;++i)
    {
        list1.push_back(i*2);
        list2.push_front(i*5);
    }
    cout<<"\nList 1"<<endl;
    showlist(list1);

    cout<<"\nList 2 "<<endl;
    showlist(list2);

    cout<<"\nFirst element in list 1 "<<list1.front();
    cout<<"\nLast element in list 2 "<<list2.back();

    list1.reverse();
    cout<<"Reversed list of 1 "<<endl;
    showlist(list1);

    list2.sort();
    cout<<"Sorted "<<endl;
    showlist(list2);
}