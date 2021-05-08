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

// sum at k level 
int ksum(Node* root, int k)
{
    if(root == NULL){
        return -1;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int sum = 0;
    int level = 0;

    while(!q.empty())
    {
        Node* node = q.front();
        q.pop();

        if(node != NULL){

            if(level == k){
                sum+=node->data;
            }
            // if there is element in left then push to queue
            if(node->left){
                q.push(node->left);
            }
              // if there is element in right then push to queue
            if(node->right){
                q.push(node->right);
            }
        }

//after evrery level we are adding NULL to queue
        else if(!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;

}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<ksum(root, 2);

    return 0;
}