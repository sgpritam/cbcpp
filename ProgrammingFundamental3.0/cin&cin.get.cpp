#include<iostream>
using namespace std;
int main()
{
    char ch;
    //cin>>ch;
    ch = cin.get();

    while(ch!='!')
    {
        cout<<ch;
        //cin>>ch;
        ch = cin.get();
    }
}
