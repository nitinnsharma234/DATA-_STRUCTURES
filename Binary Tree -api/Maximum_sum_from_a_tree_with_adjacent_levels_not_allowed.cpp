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
vector<int >v1,v2;
/*void check(int x,int i)
{int p,q;
     p=pow()
    if (i%2!=0)
    {
        v1.push_back(x);
    }
    if (i%2==0)
    {
        v2.push_back(x);
    }
}*/
void adjacent_sum(Node*temp,int level)
{
    if (!temp)
    {
         return ;
    }
    if (level%2==1)
    {
         v1.push_back(temp->data);
    }
    if (level%2==0)
    {
         v2.push_back(temp->data);
    }
    adjacent_sum(temp->left,level+1);
    adjacent_sum(temp->right,level+1);
}
int main()
{
 /*Node*root=new Node(1);
 root->left=new Node(2);
 root->left->left=new Node(3);
 root->left->right=new Node(4);
 
 root->right= new Node(5);
 root->right->left=new Node(6);
 root->right->right=new Node(7);*/
   Node* root = new Node(1);  
        root->left = new Node(2);  
        root->right = new Node(3);  
        root->right->left = new Node(4);  
        root->right->left->right = new Node(5);  
        root->right->left->right->left = new Node(6);  
 adjacent_sum(root,1);
 int sum1,sum2;
 sum1=accumulate(v1.begin(),v1.end(),0);
 sum2=accumulate(v2.begin(),v2.end(),0);
 cout<<max(sum1,sum2);
// cout<<sum1;
}
