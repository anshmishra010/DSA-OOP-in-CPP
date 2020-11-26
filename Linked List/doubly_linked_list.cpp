#include<iostream>
using namespace std;

class Node
{
    public:

        Node *next;
        Node *prev;
        int data;

        Node(int ele)
        {
            next=NULL;
            prev=NULL;
            this->data=ele;
        }

};

class dll
{
    Node *head;
    public:
           dll()
           {
               head=NULL;
           }

           //creating the node
           void create()
           {
               int n;
               int temp;
               cout<<"How many element you want ? "<<endl;
               cin>>n;
               for(int i=1;i<=n;i++)
               {
                   cout<<"Enter "<<i<<" elemnet"<<endl;
                   cin>>temp;
                   addatend(temp);
               }
           }

           void addatbeg(int ele)
           {
               Node *q=new Node(ele);//creating new node
               q->next=head; //assiging the new node as the head
               if(head!=NULL)// if there is already a head present
               {
                   head->prev=q;//then make it as a second node as second node stores the address of new head added
               }
               head=q; //here head is created

               
           }

           void addatend(int ele)
           {
               if(head==NULL)
               {
                   addatbeg(ele);
                   return;
               }
               else
               {
                   int n = count();
                   Node *p= head; //declaring p as head to traverse the list
                   for(int i=1;i<n;i++)
                   {
                       p=p->next; //incrementing till last

                   }
                   Node *q=new Node(ele);// new node made to add data
                   q->prev=p; //new node previous will point to previous 
                   p->next=q; ////new node previous will point to previous next

               }
               
           }

           void addatpos(int pos, int ele)
           {
               int n=count();
               if(pos>n+1 || pos<1)
               {
                   cout<<" Invalid position choosed = "<<pos<<endl;
                   return;
               }
               if(pos==1)
               {
                   addatbeg(ele);
               }
               else
               {
                   Node *q=new Node(ele); //making new node
            
                   Node *p=head; // making p as head node for traversing
                   for(int i=1;i<pos-1;i++) //traversing one position less as entered value
                   {
                       p=p->next;
                   }
                   q->prev=p; //new node previous point the previous node
                   q->next=p->next; //new node next will point previous next address
                   p->next=q; //previous next i= q
                   if(q->next!=NULL)
                   {
                       q->next->prev=q;
                   }
               }
               
           }

           void deleteatbeg()
           {
               if(head==NULL)
               {
                   return;
               }
               Node *p=head;//making new p as head
               head=head->next; //making second element as head
               delete p;
               if(head!=NULL)
               {
                   head->prev=NULL; //as head
               }
           }

           void deleteatend()
           {
               if(head==NULL)
               {
                   return;
               }
               if(head->next==NULL)// if there is single element in the list
               {
                   delete head;
                   head=NULL;
                   return;
               }
               int n= count();
               Node *p=head;
               for(int i=1; i<n ;i++)
               {
                   p=p->next;
               }
               p->prev->next=NULL;
               delete p;
           }

           void deleteatpos(int pos)
           {
               int n=count();
               if(pos<1||pos>n)
               {
                   cout<<"Invalid position = "<<pos<<endl;
               }
               if(pos==1)
               {
                   deleteatbeg();

               }
               else
               {
                   Node *p=head;
                   for(int i=1;i<pos-1;i++)
                   {
                       p=p->next;
                   }
                   Node *q=p->next; //next of previous will be pointing to node which we want to delete
                   p->next=q->next;
                   if(q->next!=NULL)
                   {
                       q->next->prev=p; //making link of previous node and the next node
                   }
                   delete q;
               }
               
           }

           int count()
           {
               if(head==NULL)
               {
                   return 0;
               }
               int counter=0;
               Node *p=head; //for traversing
               while(p!=NULL) //till we found last element, next of last element is NULL
               {

                   p=p->next;
					  counter++;
               }
               return counter;
           }

           int display()
           {
               Node *p=head;
               while(p!=NULL)
               {
                   cout<<p->data<<" ";
                   p=p->next;

               }
               cout<<"\n"<<endl;
           }
           
};

int main()
{
    dll l1;
    int ch,ele,pos;
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

        switch (ch)
        {
            case 1:
                   l1.create();
                   break;
            case 2:
                    cout<<"Enter the element "<<endl;
                    cin>>ele;
                    l1.addatend(ele);
                    break;
            case 3:
                    cout<<"Enter the data "<<endl;
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
	
