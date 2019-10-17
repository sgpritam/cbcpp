#include <iostream>
using namespace std;
int main() {
    int n,d,k,r,c=0;
    cin>>n;
    cin>>k;
    while(n>0)
    {
        r=n%10;
        if(r==k)            //if i put a {} bracket after if it don't show output e.g if if(r==k){ c++; n=n/10 }-why it not working please explain without braces it show output
            c++;
            n=n/10;

    }
    cout<<c;
}

