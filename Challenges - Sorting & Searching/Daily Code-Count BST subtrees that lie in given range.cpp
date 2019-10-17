#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    node* right=NULL;
    node* left=NULL;
    int data;

    node(int d){
        data=d;
    }

};

node* insert(node* &root,int a[],int s,int e){

    if(s>e){
        return NULL;
    }

    int mid=(s+e)/2;

root=new node(a[mid]);
root->left=insert(root->left,a,s,mid-1);
root->right=insert(root->right,a,mid+1,e);
return root;

}

bool inRange(node *root, int i, int j)
{
    return root->data >= i && root->data <= j;
}

bool check(node*root, int i, int j, int* count){

    if(root==NULL){                         /// if reached end and still not found any number that isnt within the range of given limit  so return true
        return true;
    }

   bool lt= check(root->left,i,j,count) ;                 //this root asks its left subtree(lt) to return boolean value denoting whether there's any element lying out of given range if theres one element then return false(i.e 0) else true
   bool rt=check(root->right,i,j,count);
   if(lt==true and rt==true and inRange(root, i, j)){
       ++*count;
       return true;                               //if true from both subtrees then count ++ else nothing
   }
   return false;
}

int main() {

node* root=NULL;

int n;

cin>>n;
int a[n];

for(int k=0;k<n;k++){
    cin>>a[k];
}
int i,j;
int cnt=0;
cin>>i>>j;                                          //taking in the range
insert(root,a,0,n-1);
check(root,i,j,&cnt);
cout<<cnt;
}

