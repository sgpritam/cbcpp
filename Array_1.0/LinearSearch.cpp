#include<iostream>
using namespace std;

int main()
{
    // Create an array and initialize
    int a[10];
    int n;
    cin>>n;

    // Input the elements of array
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // Input the key

    int key;
    cin>>key;

    // Linear Search Algorithm

    for(i=0;i<n;i++)
    {
        // Try o match key with every element
        if(key==a[i])
        {
            cout<<"Found at index "<<i<<endl;
            break;
        }
        // exit from For loop has 2 ways
        // 1. Either loop completes or we have hit the break

        if (i==n)
        {
            cout<<"The "<<key<<" is not present";
        }
    }
}
