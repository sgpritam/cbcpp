#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    cout<<&x<<endl;


    float y = 20.55;
    cout<<&y<<endl;

// It doesn't for character variable
    char ch = 'A';

// Explicitly typecasting from char* to void*
    cout<<(void *)ch<<endl;
}
