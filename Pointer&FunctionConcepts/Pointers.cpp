#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    cout<<&x<<endl;


   int y1 = 20;
    cout<<&y1<<endl;

// It doesn't for character variable
    char ch = 'A';

// Explicitly typecasting from char* to void*
    cout<<(void *)ch<<endl;


    int *xptr;
    // Storing the address
    xptr = &x;

    cout<<&x<<endl;
    cout<<xptr<<endl;

    // Re-assign another address to the variable
    xptr = &y1;
    cout<<&y1<<endl;
    cout<<xptr<<endl;
}
