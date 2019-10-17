#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // Generate all SubArrays

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // Element of subArray (i,j)
            for(int k=i;k<=j;k++){
                cout<<a[k]<<",";
            }
            cout<<endl;
        }
    }
    return 0;
}
