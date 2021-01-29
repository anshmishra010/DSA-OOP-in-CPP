#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;

    // paramitrized cons.
    node(int val){
        data = val;
        next = NULL;
    }
};

// if &head is used then there will be some changes which will be performed

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    node* temp = head;
    if(head==NULL){
        head =n;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}

void search(node* head, int key){
    node* temp =head;
    int count = 0;
    while(temp!=NULL){
        if(temp->data== key){
            count = 1;
        }
        temp=temp->next;
    }
    if(count == 1){
        cout<<key<<" is present"<<endl;
    }
    else{
        cout<<key<< "not present"<<endl;
    }
    return;
    
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

void deleteHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deleteAnywhere(node* &head, int val){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteHead(head);
        return;
    }

    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* &todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete; 

}



int main()
{
    node* head = NULL;
    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    search(head,3);
    display(head);

    deleteHead(head);
    display(head);

    deleteAnywhere(head,4);
    display(head);
}