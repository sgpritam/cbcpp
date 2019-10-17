#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int *xptr;
    xptr = &x;

    cout<<&x<<endl;
    cout<<xptr<<endl;

    cout<<*(&x)<<endl;
    cout<<*(xptr)<<endl;

    cout<<*(&xptr)<<endl;
    cout<<&(*xptr)<<endl;



    cout<<&xptr<<endl;
    // Double Pointer
    int **xxptr = &xptr;
    cout<<xxptr<<endl;

return 0;
}

