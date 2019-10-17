#include<iostream>
#include<string>
using namespace std;
int main()
{
    int m,n;
    //cin>>n;
    char str[1000];
    cin>>str;
    int i=0;
        for (  i=0;str[i+1]!='\0';i++)
        {
            m=str[i+1]-str[i];
            cout<<str[i]<<m;
        }

    cout<<str[i];


 return 0;
}
