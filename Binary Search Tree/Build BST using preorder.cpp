#include<bits/stdc++.h>
using namespace std;


struct Node{

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left  = NULL;
        right = NULL;
    }
};

Node* bst( int preorder[] , int *idx , int key ,int min , int max  , int n)
{
    if(*idx > n)
    {
        return NULL;
    }
    Node* root = NULL;
    if(key > min && key < max)
    {
        root = new Node(key);
        //for updating the node
        *idx = *idx +1;

        if(*idx < n){
            root->left = bst(preorder,idx , preorder[*idx],min , key ,n);
        }
        if(*idx < n ){
            root->right = bst(preorder , idx , preorder[*idx] ,key ,max, n);
        }
    }

    return root;
}

void printpre(Node* root)
{
    if(root == NULL){
        return;
    }
    cout<<root->data<<"  ";
    printpre(root->left);
    printpre(root->right);
}
int main()
{
    int preorder[] = {10,2,1 ,13,11};
    int n = 5;
    int idx = 0;
    Node* root = bst(preorder ,&idx ,preorder[0] ,INT_MIN, INT_MAX , n);
    printpre(root);

}