/* Assigning the heights of Node to them*/

#include<bits/stdc++.h>
using namespace std;
struct Node
{
     int data,height;
     Node*left;
     Node*right;
     Node(int x)
     {
          data=x;
          left=NULL;
          right=NULL;
     }
};

int height(Node*temp)
{
    if (!temp)
    {return 0;}
    if (!temp->left && !temp->right)
    { temp->height=1;
    return 1;}
    int L=height(temp->left);
    int R=height(temp->right);
    temp->height=max(L,R)+1;
    return   max(L,R)+1;
}
void print_inorder_height(Node*temp)
{
    if (!temp)
    { return;}
    print_inorder_height(temp->left);
    cout<<temp->data<<"-->"<<temp->height<<" \n";
    print_inorder_height(temp->right);
}
int main()
{
 Node*root=new Node(1);
 root->left=new Node(2);
 root->left->left=new Node(3);
 root->left->right=new Node(4);
 //root->left->right->left=new Node(4);
 
 root->right= new Node(5);
 root->right->left=new Node(6);
 root->right->right=new Node(7);
 root->right->right->left=new Node(70);
 root->right->right->right=new Node(17);
 root->right->right->right->left=new Node(17);
 root->right->right->right->right =new Node(17);
 height(root);
 print_inorder_height(root);
}
