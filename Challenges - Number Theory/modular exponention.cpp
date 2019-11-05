#include<iostream>
using namespace std;
long long int pow_exp(long long int x, long long int n,long long int c)
    {long long int res = 1;
    while (n > 0)
        {if (n & 1)
            res = res * x;
            res%=c;
            res=(res+c)%c;
        x = x * x;
        x%=c;
        n >>= 1;
        }
    return res%c;
    }
long long int mod_exp(long long int a, long long int b, long long int c)
{
  return (pow_exp(a,b,c))%c;
}
int main() {
  long long int a,b,c;
  cin>>a>>b>>c;
  cout<<mod_exp(a,b,c);
	return 0;
}
