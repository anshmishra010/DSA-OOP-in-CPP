// Binary Search tree using dynamic node
// in this duplicates are not allowed though we have duplicates but in this code we are not taking.

#include <bits/stdc++.h>
#define SPACE 10
using namespace std;

class TreeNode
{
public:    
    int value; //key or data
    TreeNode *left;
    TreeNode *right;

    // default constructor
    TreeNode()
    {
        value = 0;
        left = NULL;
        right = NULL;
    }

    // paramitrized const.
    TreeNode(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    TreeNode *root;

    // constr.
    BST()
    {
        root = NULL;
    }

    bool isEmpty()
    {
        if (root == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void insertNode(TreeNode *new_node)
    {
        if (root == NULL)
        {
            root = new_node;
            cout << "Value added at root" << endl;
        }
        else
        {
            TreeNode *temp = root;

            while (temp != NULL)
            {
                if (new_node->value == temp->value)
                {
                    cout << "Duplicates are not allowed , Insert another value" << endl;
                    return;
                }

                //  for left value
                else if ((new_node->value < temp->value) && (temp->left == NULL))
                {
                    temp->left = new_node;
                    cout << "Value inserted to left" << endl;
                    break;
                }
                else if (new_node->value < temp->value) //it is used to traverse to left node as of the root as root contains a left child.
                {
                    temp = temp->left;
                }

                // for right value
                else if ((new_node->value > temp->value) && (temp->right == NULL))
                {
                    temp->right = new_node;
                    cout << "Value inserted to right" << endl;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }

    void print2D(TreeNode *r, int space)
    {
        if (r == NULL)
        {
            return;
        }
        space += SPACE;
        print2D(r->right, space);
        cout << endl;
        for (int i = SPACE; i < space; i++)
        {
            cout << " ";
        }
        cout << r->value << "\n";
        print2D(r->left, space);
    }

    // printing the tree in preorder way!
      void printPreorder(TreeNode* r)
      {
          if(r == NULL)
          {
              return;
          }
        //   first print data of node
            cout<<r->value<<" ";
            //   then recur on left subtree
            printPreorder(r->left);
            // now recur on right subtree
            printPreorder(r->right);
      } 

      void printInorder(TreeNode* r) //(left,node,right)
      {
          if(r==NULL)
          {
              return;
          }
          printInorder(r->left);
          cout<<r->value<<" ";
          printInorder(r->right);
      }

       void printPostorder(TreeNode* r) //(left,right,node)
       {
           if(r==NULL)
           {
               return;
           }
           printPostorder(r->left);
           printPostorder(r->right);
           cout<<r->value<<" ";
       }

    // Searching
        TreeNode* iterativeSearch(int v)
        {
            if(root == NULL)
            {
                return root;
            }
            else
            {
               TreeNode* temp = root;
               while(temp!=NULL)
               {
                   if(v == temp->value)
                   {
                       return temp;
                   }
                   else if(v<temp->value)
                   {
                       temp= temp->left;
                   }
                   else
                   {
                       temp= temp->right;
                   }
               }
               return NULL; 
            }
        }

        //  height of a bst
         int height(TreeNode* r)
         {
             if(r==NULL)
             {
                 return -1;
             }
             else
             {
                 int lh = height(r->left);
                 int rh = height(r->right);
                 if(lh>rh){
                     return (lh+1);
                 }
                 else
                 {
                     return (rh+1);
                 }
             }
         }

        //  print nodes at a given level BFS
        void printlevel(TreeNode* r, int level)
        {
            if(r==NULL)
            {
                return;
            }
            else if(level == 0)
            {
                cout<<r->value<<" "; 
            }
            else
            {
                printlevel(r->left,level-1);
                printlevel(r->right,level-1);
            }
        }
        void printBFS(TreeNode* r)
        {
            int h=height(r);
            for(int i=0;i<h;i++)
            {
                printlevel(r,i);
            }
        }

        // Delete a node
        TreeNode* minVal(TreeNode* node)
        {
            TreeNode* current = node;
            while(current->left != NULL)
            {
                current = current->left;
            }
            return current;
        }
        TreeNode* deletenode(TreeNode* r, int v)
        {
            if(r == NULL)// base case 
            {
                return NULL;
            }
            // If the key to be deleted is smaller than the root's key, 
            // then it lies in left subtree 
            else if(v<r->value)
            {
                r->left = deletenode(r->left,v);
            }
            // If the key to be deleted is greater than the root's key, 
           // then it lies in right subtree 
            else if(v>r->value)
            {
                r->right = deletenode(r->right,v);
            }
// if key is same as root's key, then This is the node to be deleted 
            else
            {
                if(r->left == NULL)
                {
                    TreeNode* temp = r->right;
                    delete r;
                    return temp;
                }
                else if(r->right == NULL)
                {
                    TreeNode* temp = r->left;
                    delete r;
                    return temp;
                }
                else
                {
                    // node with two children: Get the inorder successor (smallest 
                 // in the right subtree)
                    TreeNode* temp = minVal(r->right);
                    r->value = temp->value;
                    r->right = deletenode(r->right,temp->value);
                }

            }
            return r;
        }
        

};

int main()
{
    BST obj;
    int option, val;
    do
    {
        cout << "What operation you want ?"
             << "Select an option , and to Exit choose 0" << endl;
        cout << "1 Insert a node " << endl;
        cout << "2 Search a node " << endl;
        cout << "3 Delete a node " << endl;
        cout << "4 Print BST value " << endl;
        cout <<"5 Heigth of a tree " <<endl;
        cout << "6 Clear Screen " << endl;
        cout << "0 Exit " << endl;

        cin >> option;

        TreeNode *new_node = new TreeNode(); //memory of the node is being stored in heap as it is global

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Insert" << endl;
            cout << "Enter the value for BST " << endl;
            cin >> val;
            new_node->value = val;
            obj.insertNode(new_node);
            cout << endl;
            break;
        case 2:
            cout << "Search " << endl;
            cout<<"Enter the number to search "<<endl;
            cin>>val;
            new_node = obj.iterativeSearch(val);
            if(new_node != NULL)
            {
                cout<<"Value found "<<endl;
            }
            else
            {
                cout<<"Value not found "<<endl;
            }
            break;
        case 3:
            cout << "Delete " << endl;
            cout<<"Enter the value o be deleted "<<endl;
            cin>>val;
            new_node = obj.iterativeSearch(val);
            if(new_node != NULL)
            {
                obj.deletenode(obj.root,val);
                cout<<"Value deleted"<<endl;
            }
            else
            {
                cout<<"Not found value"<<endl;
            }
            break;
        case 4:
            cout << "Print " << endl;
            obj.print2D(obj.root, 5);
            cout<<"\n";
            cout<<"Printing BFS "<<endl;
            obj.printBFS(obj.root);
            cout<<"printing by preorder"<<endl;
            obj.printPreorder(obj.root);
            cout<<"\n";
            cout<<"printing by inorder "<<endl;
            obj.printInorder(obj.root);
            cout<<endl;
            cout<<"printing by postorder "<<endl;
            obj.printPostorder(obj.root);
            cout<<endl; 
            break;

        case 5:
            cout<<"Tree height "<<endl;
            cout<<"Height : "<<obj.height(obj.root)<<endl;
            break;
        case 6:
            system("cls");
            break;
        default:
            cout << "Enter given option !! " << endl;
        }
    } while (option != 0);

    return 0;
}