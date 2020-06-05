#include<bits/stdc++.h>
using namespace std;

int preorder=0;
/*Searching the element in Inorder Array*/
int search(int in[],int start,int end,int Data)
{    int i=0;
     for ( i=start;i<end;i++)
     {
          if (in[i]==Data)
          {
               return i;
          }
         
     } return i;
}
/*Printing the postorder from given Inorder and preorder*/
void postorder(int in[],int pre[],int start,int end)
{
     if (end<start)
     {
          return ;
     }
   int   inIndex=search(in,start,end,pre[preorder++]);
     postorder(in,pre,start,inIndex-1);
     postorder(in,pre,inIndex+1,end);
     cout<<in[inIndex];
     
}

int main()
{
     int in[]={1,2,3,4,5,6};
     int pre[]={4,2,1,3,6,5};
     postorder(in,pre,0,5);
}
