#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minIndex])
            {
                minIndex=j;
            }
        }
        swap(a[minIndex],a[i]);
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}


int main() {

    int n;
    cin>>n;

    int a[n];


    for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

    selectionSort(a,n);
    print(a,n);
	return 0;
}
