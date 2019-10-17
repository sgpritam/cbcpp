#include<iostream>
using namespace std;
int fun(int sum,long a)
{
    int n;
    sum=0;
    while(a!=0)
    {
        n=a%10;
        sum=sum+n;
        a=a/10;
    }
}
int main()
{
    long a,sum;
    cin>>a;
    fun(sum,a);
    cout<<sum;
return 0;
}
