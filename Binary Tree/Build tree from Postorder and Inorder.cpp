#include <bits/stdc++.h>
using namespace std;

//base data
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inord[], int start , int end , int val)
{
    for(int i= start; i<= end ; i++){
        if(inord[i] == val){
            return i;
        }
    }
    return -1;
}

// we will do just opp. ,as we were doing in preorder and inorder
Node* buildt(int postord[], int inord[] , int start , int end )
{
    //base case
    if(start>end){
        return NULL;
    }
    // we start indesx from end , as in postorder we have left, right, root order so we have root in last
    static int ind = 4;
    //store the index value
    int val = postord[ind];
    ind--;
    //build tree
    Node *curr = new Node(val);

    if(start == end)
    {
        //we don't left any elemnet in inorder
        return curr;
    }

    //will search the pos in inorder
    int pos = search(inord , start, end, val);
    //building the tree
    // firstly we will build right then left due to postorder
    curr->right = buildt(postord , inord , pos+1 , end);
    curr->left = buildt(postord, inord , start, pos-1);

    return curr;
}

//for testing
void inorderp(Node* root)
{
    if(root == NULL){
        return;
    }
    inorderp(root->left);
    cout<<root->data<<" ";
    inorderp(root->right);
}
int main()
{
    int postord[] = {4,2,5,3,1};
    int inord[] = {4,2,1,5,3};

    //tree
    Node* temp = buildt(postord,inord,0,4);
    inorderp(temp);
    cout<<endl;

    return 0;
}