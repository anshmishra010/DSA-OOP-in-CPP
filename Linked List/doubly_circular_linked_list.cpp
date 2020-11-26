#include<iostream>
using namespace std;
class Node
{
    public:
        Node *prev;
        Node *next;
        int data;

        Node(int ele)
        {
            next=NULL;
            prev=NULL;
            this->data=ele;
        }
};

class dcll 
{
    private:
           Node *front;
           Node *rear;
    public:
           dcll()
           {
               front=NULL;
               rear=NULL;
           }

           void create()
           {
               int n;
               int temp;
               cout<<"Enter how many data you want to enter ? "<<endl;
               cin>>n;
               for(int i=0;i<n;i++)
               {
                   cin>>temp;
                   addatend(temp);
               }
           }

           void addatbeg(int ele)
           {
               if(front==NULL)
               {
                   Node *q=new Node(ele);
                   front =q;
                   rear=front;
                   return;
               }
               Node *q=new Node(ele);
               q->next=front;////in this we have not done the traversing as we have taken front pointer which points to first data
               q->prev=rear;
               front->prev=q;
               rear->next=q;
               front=q; //later we assign to first node
           }


           void addatend(int ele)
           {
               if(front==NULL)
               {
                   addatbeg(ele);
                   return;
               }
               Node *q=new Node(ele);
               q->prev=rear; //in this we have not done the traversing as we have taken one more pointer as rear which points to last data
               q->next=front;
               rear->next=q;
               front->prev=q;
               rear=q;
               
           }

           void addatpos(int pos,int ele)
           {
               int n=count();
               if(pos>n+1 || pos<1)
               {
                   cout<<"Invalid position = "<<pos<<endl;
                   return;
               }
               if(pos==NULL)
               {
                   addatbeg(ele);
               }
               else
               {
                   Node *q=new Node(ele);
                   Node *p=front;
                   for(int i =1;i<pos-1;i++)
                   {
                       p=p->next;

                   }
                   q->prev=p;
                   q->next=p->next;
                   p->next=q;
            
               }
               
           }

           void deleteatbeg()
           {
               if(front==NULL)
               {
                   cout<<"Your list is empty "<<endl;
                   return;
               }
               if(front==rear)
               {
                   delete front;
                   front=NULL;
                   rear=NULL;
                   return;

               }
               Node *p=front;
               front=front->next; //unlinking of front and rear address
               front->prev=rear;
               rear->next=front;
               delete p;
        
               
           }

           void deleteatend()
           {
               if(front==NULL)
               {
                   cout<<"List empty ";
                   return;
               }
                if(front==rear)
               {
                   delete front;
                   front=NULL;
                   rear=NULL;
                   return;

               }
               rear->prev->next=front;
               rear->next->prev=rear->prev;
               Node *p=rear;
               rear=rear->prev;
               delete p;


           }

           void deleteatpos(int pos)
           {
               int n=count();
               if(pos<1 || pos>n)
               {
                   cout<<"Invalid position "<<endl;
               }
               if(pos==1)
               {
                   deleteatbeg();
               }
               else
               {
                   Node *p=front;
                   for(int i=0;i<pos-1;i++)
                   {
                       p=p->next;
                   }
                   Node *q=p->next;//unlinking is happening
                   p->next=q->next;
                   q->next->prev=p;
                   delete q;
                   if(p->next==front)
                   {
                       rear=p;
                   }
               }
               
           }

           int count()
           {
               if(front==NULL)
               {
                   return 0;
               }
               int counter=1;
               Node *p=front;
               while(p->next!=front)
               {
                   counter++;
                   p=p->next;
                
               }
               return counter;
           }

           void display()
           {
               if(front==NULL)
               {
                   cout<<"Its empty !! "<<endl;
                   return;
               }
               Node *p=front;
               while(p!=rear)
               {
                   cout<<p->data<<" ";
                   p=p->next;
               }

               cout<<p->data;
               cout<<"\n"<<endl;

           }

           
};
int main()
{
    dcll l1;
    int ch;
    int ele;
    int pos;

    while(true)
    {
        cout<<"1) Create List "<<endl;
		cout<<"2) Add at Beginning "<<endl;
		cout<<"3) Add at End "<<endl;
		cout<<"4) Add at Position "<<endl;
		cout<<"5) Delete at Beginning "<<endl;
		cout<<"6) Delete at End "<<endl;
		cout<<"7) Delete at Position "<<endl;
		cout<<"8) Count "<<endl;
		cout<<"9) Display "<<endl;
		cout<<"10) Exit "<<endl;
		cout<<"Enter your choice : ";
		cin>>ch;

        	switch(ch){
			case 1 : 
				l1.create();
				break;
			case 2 :
				cout<<"Enter data value : ";
				cin>>ele;
				l1.addatbeg(ele);
				break;
			case 3 :
				cout<<"Enter data value : ";
				cin>>ele;
				l1.addatend(ele);
				break;
			case 4 :
				cout<<"Enter data value : ";
				cin>>ele; 
				cout<<"\nEnter Position : ";
				cin>>pos;
				l1.addatpos(pos, ele);
				break;
			case 5 :
				l1.deleteatbeg();
				cout<<"\ndeleted Successfully !! \n"<<endl;
				break;
			case 6 :
				l1.deleteatend();
				cout<<"\ndeleted Successfully !! \n"<<endl;
				break;
			case 7:
				cout<<"\nEnter Position : ";
				cin>>pos;
				l1.deleteatpos(pos);
				cout<<"\ndeleted Successfully !! \n"<<endl;
				break;
			case 8:
				cout<<"\nSize of List is : "<<l1.count()<<endl;
				break;
			case 9:
				cout<<"\n\nlist : ";
				l1.display();
				break;
			case 10:
				exit(0);
				break;
			default:
				cout<<"\nInvalid Choice !!"<<endl;
				break;
		}

        

      

    }
    return 0;
}