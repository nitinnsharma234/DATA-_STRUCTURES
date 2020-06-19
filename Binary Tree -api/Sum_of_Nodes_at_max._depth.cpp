#include<bits/stdc++.h>
using namespace std;
struct Node
{
     int data;
     Node*left;
     Node*right;
     Node(int x)
     {
          data=x;
          left=NULL;
          right=NULL;
     }
};
int max_len,sum=0;
void depth(Node*temp,int len)
{//static int max_len=INT_MIN;
    if (!temp)
    {return;}
    if (!temp->left && !temp->right)
    {
            if (len>max_len)
            {
                max_len=len;
                
                sum=temp->data;
            }//cout<<*max_len;
            else if (len==max_len){
                 sum+=temp->data;
            }
    }
    depth(temp->left,len+1);
    depth(temp->right,len+1);
}

int main()
{
 /*Node*root=new Node(1);
 root->left=new Node(2);
 root->left->left=new Node(3);
 root->left->right=new Node(4);
 root->left->right->right=new Node(4);
 root->left->right->right->left=new Node(40);
 
root->right= new Node(5);
root->right->left=new Node(6);
root->right->left->right=new Node(6);
root->right->left->right->left=new Node(4);
root->right->right=new Node(7);
root->right->right->right=new Node(47);
root->right->right->left=new Node(05);
root->right->right->left->right=new Node(756);*/
      Node* root = new Node(1); 
      root->left = new Node(2); 
      root->right = new Node(3); 
      root->left->left = new Node(4); 
      root->left->right = new Node(5); 
      root->right->left = new Node(6); 
      root->right->right = new Node(7);
 depth(root,1);
 cout<<sum;
}
