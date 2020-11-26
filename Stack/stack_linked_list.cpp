#include<iostream>
using namespace std;

class stack
{
    public:
        
        int data;
        stack *next;
        stack *top;
        
        stack(int ele)
        {
            this->data=ele;
            this->next=NULL;
        }
        stack()
        {
            this->data=0;
            this->next=NULL;
            top=NULL;
        }

        void push(int ele)
        {
            stack *p=new stack(ele);
            p->next=top;
            top=p;
        }
        int pop()
        {
            if(empty())
            {
                cout<<"Stack is empty "<<endl;
                return 0;
            }
            else
            {
                stack *p=top;
                int x=p->data;
                top=top->next;
                delete p;
                return x;
            } 
        }
        int empty()
        {
            if(top==NULL)
            {
                return 1;
            }
            return 0;
        }
        void display()
        {
            if(empty())
            {
                cout<<"stack empty "<<endl;
            }
            stack *p=top;
            while(p!=NULL)
            {
                cout<<p->data<<"\n";
                p=p->next;
            }
            cout<<"\n";
        }
};

int main()
{
    stack s;
    int ele;
    int ch;
    cout<<"\nStack using linked list "<<endl;
    
    while(1)
    {
        cout<<"1)Push the element "<<endl;
        cout<<"2)Pop the element "<<endl;
        cout<<"3)Display\n "<<endl;

        cout<<"Enter the choice\n"<<endl;
        cin>>ch;

        switch (ch)
        {
            case 1:
                 cout<<"Enter the elemenet in the stack"<<endl;
                 cin>>ele;
                 s.push(ele);
                 break;
            case 2:
                  s.pop();
                  break;
            case 3:
                  s.display();
                  break;
        }
    }
    return 0;

}

