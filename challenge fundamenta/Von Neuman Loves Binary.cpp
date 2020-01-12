#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long b;
    while((n--)>0){
        cin>>b;
        int p=0;
        long long d=0;
        while(b>0){
            d+=(b%10)*pow(2,p);
            p+=1;
            b/=10;
        }
        cout<<d<<endl;
    }
	return 0;
}
