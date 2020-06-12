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
std::queue<int>q1,q2;
void mirrorr(Node* temp,int k)
{
    if (temp==NULL)
    {return;}
     
    mirrorr(temp->left,k);
    if (k==0)
    {
        q1.push(temp->data);
    }
    else
    {
        q2.push(temp->data);
    }
    mirrorr(temp->right,k);
}
void reverse()
{
     if(q1.empty())
     {
          return;
     }
     int k=q1.front();
     q1.pop();
     reverse();
     q1.push(k);
}
bool compare()
{
     while(!q1.empty() && !q2.empty())
     {    q1.pop();q2.pop();
          if (q1.front()!=q2.front())
          return false;
          
     }
     return true;
     
}
int main()
{
    Node *root=new Node(21);
    root->left=new Node(10);
    root->left->right=new Node(14); 
    root->left->left=new Node(16);
    root->right= new Node(25);
    root->right->left=new Node(41);
    root->right->right= new Node(19);
    //std::queue<int>q1;
    Node*root1=new Node(21);
    root1->left=new Node(25);
     root1->left->right=new Node(41);
      root1->left->left=new Node(19);
      root1->right=new Node(10);
       root1->right->left=new Node(14);
        root1->right->right=new Node(16);
    mirrorr(root,0);
    mirrorr(root1,1);
    reverse();
    int k=compare();
     if (k==1)
     {
          cout<<"it is a mirror TRee\n";
     }
     else
     {
          cout<<"Not a mirror TRee\n ";
     }
    


}
