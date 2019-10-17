#include<iostream>
using namespace std;
void triplets(int ar[],int n,int target)
{
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(ar[i]+ar[j]+ar[k]==target)
                {
                cout<<ar[i]<<","<<" "<<ar[j]<<" "<<"and"<<" "<<ar[k];
                cout<<endl;
                }
            }
        }
    }
  }

void sort(int ar[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
}
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	}
	int target;
	cin>>target;
 sort(ar,n);

 triplets(ar,n,target);
	return 0;
}
