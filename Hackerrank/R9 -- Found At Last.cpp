#include<iostream>
using namespace std;

int search(int m,int* arr,int i)
{
  if(i<0)
  return -1;
  if(arr[i]==m)
  return i;
  return search(m,arr,i-1);
}

int main() {
  int n,m;
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  cin>>m;
 int pos=search(m,arr,n-1);
 cout<<pos;
	return 0;
}
