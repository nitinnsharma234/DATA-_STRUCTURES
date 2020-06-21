/*Difference between sums of odd level and even level nodes of a Binary Tree
Given a a Binary Tree, find the difference between the sum of nodes at odd level and the sum of nodes at even level. Consider root as level 1, left and right children of root as level 2 and so on.
For example, in the following tree, sum of nodes at odd level is (5 + 1 + 4 + 8) which is 18. And sum of nodes at even level is (2 + 6 + 3 + 7 + 9) which is 27. The output for following tree should be 18 – 27 which is -9.*/


/*Code*/#include<bits/stdc++.h>
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

int sum_o=0,sum_e=0;
void Difference_odd_even(Node *temp,int level)
{
    if (!temp)
    {return;}
    if (level%2==0)
    {sum_o+=temp->data;}
    if (level%2!=0)
    { sum_e+=temp->data;}
    Difference_odd_even(temp->left,level+1);
    Difference_odd_even(temp->right,level+1);
}

int main()
{
 Node*root=new Node(1);
 root->left=new Node(2);
 root->left->left=new Node(3);
 root->left->right=new Node(4);
 
 root->right= new Node(5);
 root->right->left=new Node(6);
 root->right->right=new Node(7);
 Difference_odd_even(root,1);
 cout<<sum_o-sum_e;
}
