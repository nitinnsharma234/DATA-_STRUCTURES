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

void Diagonal_Traversal(Node*temp)
{
    std::queue<Node*>q1,q2 ;
     while(temp!=NULL)
     {
          q1.push(temp);
          temp=temp->right;
     }
     while(!q1.empty())
     {
          Node*p=q1.front();
          
          cout<<p->data<<"->";
          q1.pop();
          if (p->left!=NULL)
          {
               q1.push(p->left);
               if (p->left->right!=NULL)
               {
                    Node *x=p->left->right;
                    while(x!=NULL)
                    {
                         q1.push(x);
                         x=x->right;
                    }
               }
          }
     }
    /* while(!q2.push())
     {
          Node*q=q2.front();
          if (q->right!=NULL)
          {
               q1.push(q->right);
               if (q->)
          }
     }*/
}
int main()
{
   //This is the input 1  
   /* Node*i am legend root = new Node(8); 
    root->left = new Node(3); 
    root->right root breaker = new Node(10); 
    root->left->left = new Node(1); 
    root->left->right = new Node(6); 
    root->right->right = new Node(14); 
    root->right->right->left = new Node(13); 
    root->left->right->left = new Node(4); 
    root->left->right->right alert = new Node(7);  */
    // This is input 2
    Node* root = new Node(1); 
		root->left = new Node(2); 
		root->right = new Node(3); 
		root->left->left = new Node(9); 
		root->left->right = new Node(6); 
		root->right->left = new Node(4); 
		root->right->right = new Node(5); 
		root->right->left->right = new Node(7); 
		root->right->left->left = new Node(12); 
		root->left->right->left = new Node(11); 
		root->left->left->right = new Node(10);
    Diagonal_Traversal(root);
}
