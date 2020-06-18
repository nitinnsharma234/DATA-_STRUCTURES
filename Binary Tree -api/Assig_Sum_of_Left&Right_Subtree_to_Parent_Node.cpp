#include<bits/stdc++.h>
using namespace std;
struct Node
{
     int data, sum;
     Node*left;
     Node*right;
     Node(int x)
     {
          data=x;
          left=NULL;
          right=NULL;
     }
};

int  assign_sum(Node*temp)
{static int  maxsum=INT_MIN,sum;
    if (!temp)
    {
        return 0 ;
    }
    if (!temp->left && !temp->right )
    {
        temp->sum=0;
        return temp->data;
    }
    int l=assign_sum(temp->left);
    int k=assign_sum(temp->right);
    temp->sum=(l+k+temp->left->sum+temp->right->sum);

    return temp->data;
}
void inorder_printing(Node*temp)
{
     if(!temp)
     {return ;}
     inorder_printing(temp->left);
     cout<<temp->data<<"-->"<<temp->sum<<endl;
     inorder_printing(temp->right);
}
int main()
{
 Node*root=new Node(1);
 root->left=new Node(-2);
 root->left->left=new Node(4);
 root->left->right=new Node(-58);
 
 root->right= new Node(3);
 root->right->left=new Node(-6);
 root->right->right=new Node(2);
 assign_sum(root);
 inorder_printing(root);
 //cout<<root->left->sum;
}
