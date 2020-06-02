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
/*This is a function to calculate height of this tree.*/

int height(Node*temp)
{
     if (!temp)
     {
          return 0;
     }
    int  l_ht= height(temp->left);
    int  r_ht=height(temp->right);
  
     // Returning the maximum out of the left subtree and right subtree.
     if (l_ht > r_ht)
     {
          return (l_ht+1);
     }
     else
     {
          return (r_ht+1);
     }
}

/*Calculating the size of the array using Traversing all of the Nodes*/
int s;
void size(Node* root)
{
     if (!root)
     {
        return ;  
     }s++;
     size(root->left);
     size(root->right);
}

/*Density of the Binary Tree*/
void Density(int h)
{
     float d=(float) s/h;
     cout<<"\n The Density of the Binary Tree is "<<d;
     
}

int main()
{
    /* Node* root = new Node(1);
     root->left = new Node(2); 
     root->right = new Node(3); */
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
          int h=height(root);
          size(root);
          Density(h);
}
