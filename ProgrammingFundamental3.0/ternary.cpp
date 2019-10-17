#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    //int x = no % 2 ? 0:1;
    //cout<<x<<endl;

    no&1 ? cout<<"odd\n" : cout<<"even"<<endl;
    int x = no%2 ? no*no : no;
    cout << x<<endl;

    return 0;
}
