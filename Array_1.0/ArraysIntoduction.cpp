#include<iostream>
using namespace std;

int main()
{
    // Declare + Initialize an array
    int a[10]={1,2,3};
    // Brackets you give the maximum possible you will need !

    // You want to input some element in your array

    for(int i = 0;i<=9;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<=9;i++)
    {
        a[i]=a[i]*a[i];
    }
    cout<<endl;
    for(int i = 9;i>=0;i--)
    {
        cout<<a[i]<<" , "<<endl;
    }
    cout<<endl;
    for(int i=0;i<=9;i++)
    {
        cout<<a[i]<<" , "<<endl;
    }

    return 0;
}
