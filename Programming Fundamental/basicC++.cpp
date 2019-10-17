#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int sum;

    cin>>a;
    cin>>b;



    sum = (a+b);

    if(sum%2==0){
        cout<<"sum is EVEN\n";
    }
    else{
        cout<<"sum is ODD\n";
    }
    cout<<"sum is "<<sum<<'\n';

    return 0;
}
