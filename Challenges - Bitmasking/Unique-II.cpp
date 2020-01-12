#include<iostream>
#include<algorithm>
using namespace std;
void unique(int *a,int n)
{
	int all=0;
	for(int i=0;i<n;i++)
	{
		all=all^a[i];
	}
	int i=0;
    int k=0;
	int temp=all;
	while(temp>0)
	{
		if(temp&1)
		{
			k=i;
		}
		i++;
		temp=temp>>1;
	}
	int mask=(1<<k);
	int no1=0;
	for(int j=0;j<n;j++)
	{
		if((mask&a[j])>0)
		{
			no1=no1^a[j];
		}
	}
	int no2=all^no1;
	//int m=min(no1,no2);
	//int k=max(no1,no2);
	//cout<<m<<" "<<k;
	cout<<no2<<" "<<no1;

}
int main()
{
	int a[100005];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	unique(a,n);


return 0;
}
