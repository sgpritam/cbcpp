#include<iostream>
using namespace std;

int binarySearch(int a[], int s, int e, int key)
{
    if(s<=e)
    {
        int mid=(s+e)/2;

    if(a[mid]==key)
        return mid;

    if(a[mid]>key)
        return binarySearch(a,s,mid-1,key);
    return binarySearch(a,mid+1,e,key);
    }
    return -1;
}
int main(void)
{
    int a[] = { 2, 3, 4, 10, 40 };
    int n=sizeof(a)/sizeof(int);
    int key=10;
    cout<<binarySearch(a, 0, n - 1, key);
    return 0;
}

