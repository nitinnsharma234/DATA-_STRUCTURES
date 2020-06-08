/*Children sum property of the tress*/
#include<bits/stdc++.h>
using namespace std;

struct Node
{
   int data;
   Node*right;
   Node*left;
   Node(int x)
   {
        data=x;
        right=NULL;
        left=NULL;
   }
};
void check_children(Node*temp)
{
     if (!temp|| (temp->left ==NULL && temp->right==NULL))
     {
          return;
     } int x=0,y=0;
     if (temp->left!=NULL || temp->right!=NULL)
     {  
         
          if (temp->left!=NULL)
          {
               x=temp->left->data;
          }
          
          if (temp->right!=NULL)
          {
               y=temp->right->data;
          }
        
      }          
          
           cout<<temp->data;
               cout<<"-->"<<x<<"+"<<y<<endl;
          if (temp->data==x+y)
          {   
            //cout<<temp->data;   
          }
          else if (temp->data!=x+y)
          {
              
                   exit(0);
          }
     
     check_children(temp->left);
     check_children(temp->right);
}



int main()
{    Node*root=new Node(12);
     root->left=new Node(6);
      root->left->right=new Node(2);
       root->left->left=new Node(4);
       root->left->left->right=new Node(4);
       
     root->right=new Node(6);
     root->right->left=new Node(1);
     root->right->right=new Node(5);
     check_children(root);
}
