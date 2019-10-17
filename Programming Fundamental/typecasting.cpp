#include<iostream>
using namespace std;
int main(){
    int a=2;
    char b='A';

    //char + int = int (because integer has higher priority)
    cout<<(a+b)<<"\n";

    b = b+2;
    cout<<b<<endl;

    //Explicit Typecast - 1) Upgrade 2)-Degraded
    cout<<int(b)<<endl;
    cout<<bool(b)<<endl;//Any non-zero value is considered as True(1)
    return 0;
}
