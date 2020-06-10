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
std::queue<Node*>q;
void Traversal(Node*temp)
{
   if (!temp)
     {
          return;
     }
     if (temp->left==NULL && temp->right==NULL)
     {    //cout<<temp->data;
          q.push(temp);
          return;
     }if (!temp)
     {
          return;
     }
     Traversal(temp->left);
     Traversal(temp->right);
}

int main()
{
 Node*root=new Node(2);
 root->left=new Node(12);
  root->left->left=new Node(15);
  root->left->right=new Node(151);
   root->left->left->left=new Node(985);
 root->right=new Node(14);
 root->right->right=new Node(16);
 root->right->left=new Node(19);
 Traversal(root);
 std::queue<Node*>q1;
while(!q.empty())
 {    
      q1.push(q.front());
      q.pop();
 }
 Node*root1=new Node(20);
 root1->left=new Node(12);
  root1->left->left=new Node(15);
   root1->left->right=new Node(151);
   root1->left->left->left=new Node(985);
   root1->right=new Node(10);

 root1->right->right=new Node(16);
 root1->right->left=new Node(19);
 Traversal(root1);
//cout<<q.front()->data;
 while(!q.empty() && !q1.empty())
 {
      if (q.front()->data!=q1.front()->data)
      {   cout<<"False";
          return 0;
      
         
      }
      q.pop();
      q1.pop();
      
 }
     
}
