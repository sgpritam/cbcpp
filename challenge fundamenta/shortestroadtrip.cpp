#include<iostream>
using namespace std;

int main()
{
    // Read the line
    char ch;
    ch = cin.get();

    int x = 0;
    int y = 0;

    while(ch!='\n')
    {
        switch(ch)
        {
            case 'N':y++;break;
            case 'S':y--;break;
            case 'E':x++;break;
            case 'W':x--;break;
        }
        ch = cin.get();
    }
    cout<<"Net Displacement is "<<x<<" and "<<y<<endl;

    if(x>=0 && y>=0)
    {
        // East
        for(int i=0;i<x;i++)
        {
            cout<<"E";
        }
        //North
        for(int i=0;i<y;i++)
        {
            cout<<"N";
        }
        cout<<endl;
    }
}
