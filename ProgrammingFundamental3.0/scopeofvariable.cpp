 #include<iostream>
 using namespace std;
 //global variable
 int x=1000;
 int y=100;
int main()
{
    int x=10;
    ::x=::x+2;
    cout<<::x<<endl;  //global
    cout<<x<<endl;
    cout<<y<<endl;

    //Loop
    for(int i=1;i<=5;i++)
    {
        cout<<i<<endl;
    }
    //cout<<i<<endl;  //i is not declared in this scope
}

