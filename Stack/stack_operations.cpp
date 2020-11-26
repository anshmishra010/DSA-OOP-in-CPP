#include<iostream>
#define MAX 5
using namespace std;

class stack{
    private:
           int top;
    public:
          // int n;
           int arr[MAX];

           stack()
           {
               top=-1;
           }
         //  void insert(int ele);
           void push(int ele);
           int pop();
           int peek();
           int empty();
           int full();
           void display();
};

// void stack::insert(int ele)
// {
//     push(int ele);
// }

void stack ::push(int ele)
{
    if(!full())
    {
        arr[++top]=ele;

    }
    else
    {
        cout<<"Stack overflowed"<<endl;
    }
    
}
int stack::pop()
{
    if(empty())
    {
        cout<<"Stack is empty "<<endl;
        return 0;
    }
    int x=arr[top];
    arr[top]=0;
    top--;
    return x;

}
int stack::peek()
{
    if(top<0)
    {
        cout<<"Stack is empty "<<endl;
        return 0;
    }
    else
    {
        int x=arr[top];
        return x;
    }
}

int stack::empty()
{
    if(top==-1)
    {
       return 1;
    }
    return 0;
}

int stack::full()
{
    if(top==MAX-1)
    {
        return 1;
    }
    return 0;
}

void stack::display()
{
    if(!empty())
    {
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
    else
    {
        cout<<"stack is empty "<<endl;
    }
}

int main()
{

    stack s;
    //int arr[MAX];
    int ele;
    int ch;
    cout<<"enter the operation you perform "<<endl;
    while (1)
    {
        cout<<"\nStack operations\n"<<endl;
       // cout<<"1) Insert data  "<<endl;
        cout<<"2) Push element "<<endl;
        cout<<"3) Pop element "<<endl;
        cout<<"4) Peek "<<endl;
        cout<<"5) Display "<<endl;
        cout<<"option"<<endl;
        cin>>ch;
        switch (ch)
        
        {
        
        case 1:
            cout<<"enter element "<<endl;
            cin>>ele;
            s.push(ele);
            break;
        case 2:
            s.pop();
            break;
        case 3:
           s.peek();
            break;
        case 4:
            s.display();
            break;
        }
    }
   
}