#include<iostream>
using namespace std;

int searchIn(int a[],int s,int e,int key)
{
    // Base case
    if(s>e)
    {
        return -1;
    }
    // Recursive case
    int mid=(s+e)/2;
    if(a[mid]==key)
    {
        return mid;
    }
    // Mid lies in the first line
    if(a[s]<=a[mid])
    {
        if(key>=a[s] && key<=a[mid])
        {
            return searchIn(a,s,mid-1,key);
        }
        else
        {
            return searchIn(a,mid+1,e,key);
        }
    }
    // Mid lies in second line
    if(key>=a[mid] && key <=a[e])
    {
        return searchIn(a,mid+1,e,key);
    }
    return searchIn(a,s,mid-1,key);
}
int main() {
	int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    int y=searchIn(a,0,n-1,key);
    cout<<y;
    return 0;
}
