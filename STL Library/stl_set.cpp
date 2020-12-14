//Sets are a type of associative container in which each element has to be unique,because the value of th element identifies it. the value of element cannot be modified once it is added to the set ~ GOG
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int,greater<int>> s1; // empty set 

    s1.insert(10);
    s1.insert(23);
    s1.insert(34);
    s1.insert(32);
    s1.insert(56);
    s1.insert(10); //same num added but only one would be there in the set
    s1.insert(54);
    s1.insert(87);

    set<int,greater<int>> ::iterator itr; //using greater because we want to print the exact for of entered set , if we do not use "greater<int> then set will be sorted"
    cout<<"The set s1 is "<<endl;
    for(itr=s1.begin();itr!=s1.end();++itr) //traversal
    {
        cout<<','<<*itr; //stored value
    }
    cout<<"\n";

    set<int> s2(s1.begin(),s1.end()); //assiging elements to s2 from s1

    cout<<"Set 2 or the sorted set "<<endl;
    for(itr=s2.begin();itr!=s2.end();++itr)
    {
        cout<<','<<*itr;
    }
    cout<<"\n";

    //what if we want to remove all the elements before a particluar element.
    // tip - we will remove element from the sorted set
    cout<<" set after removal of 56 "<<endl;
    s2.erase(s2.begin(),s2.find(56));

    //print
    for(itr=s2.begin();itr!=s2.end();++itr)
    {
        cout<<','<<*itr;
    }
    cout<<"\n";

    //what if we want to remove single element only
    int num;
    num=s2.erase(56);
    cout<<"Earsed"<<endl;
    for(itr = s2.begin();itr!=s2.end();++itr)
    {
        cout<<','<<*itr;
    }
    cout<<"\n";

}