#include<iostream>
#define MAX  5
using namespace std;

class queue
{
    int front;
    int rear;
    int data[100];
    public:
         queue();
         int full();
         int empty();
         void enqueue(int ele);
         int dequeue();
         void display();
};

queue::queue()
{
    front=rear=-1;
}

int queue::full() 
{
    if(rear==MAX-1)
    {
        cout<<"Queue is full "<<endl;
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int queue::empty()
{
    if(front==-1)
    {
        cout<<"queue is empty "<<endl;
        return 1;
    }
    return 0;
}

void queue::enqueue(int ele)
{
    if(full())
    {
        cout<<"Queue is full "<<endl;
        return;
    }
    if(front==-1)
    {
        front ++;
    }
    data[++rear]=ele;
}

int queue::dequeue()
{
    int x;
    if(empty())
    {
        cout<<"empty queue "<<endl;
    }
    if(front==rear)
    {
        x=data[front];
        front=rear-1;
    }
    else
    {
        x=data[front];
        for(int i=front-1;i<=rear;i++)
        {
            data[i-1]=data[i];
        }
        rear--; 
    }
    return x;
}

void queue::display()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<data[i]<<endl;
    }
}
int main()
{
    queue q;
    int ch;
    int ele;
    while (true)
    {
        cout<<"1. Add the elements "<<endl;
        cout<<"2.Delete the elements "<<endl;
        cout<<"3. Display the elements "<<endl;
        cout<<"Enter the choice "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                  cout<<"\nEnter the data "<<endl;
                  cin>>ele;
                  q.enqueue(ele);
                  break;
            case 2: 
                  q.dequeue();
                  break;
            case 3:
                  cout<<"All the elements are "<<endl;
                  q.display();
                  break;
        }
    }
    return 0;
}