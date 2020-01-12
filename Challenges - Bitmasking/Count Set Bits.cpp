#include <iostream>
using namespace std;
int countbits(int a)
{
int ans=0;
while(a>0)
{
ans=ans+(a&1);
a=(a>>1);
}
return ans;
}
int main()
{
int n,a;
cin>>n;
while(n>0)
{
cin>>a;
int z=countbits(a);
cout<<z<<endl;
n--;
}
return 0;
}
