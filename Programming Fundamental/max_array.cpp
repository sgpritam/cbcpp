#include<iostream>
#include<algorithm>
using namespace std;

bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    int arr[1000];
    int n;
    cin>>n;
    int i;
    int max=0;
    sort(arr,arr+n,comp);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }

     cout<<max<<endl;
    return 0;
}
