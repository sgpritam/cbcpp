#include<iostream>
using namespace std;

class Car
{
public:
    int price;
    int model_no;
    char name[20];
    void start()
    {
        cout<<"Grr... starting the car "<<name<<endl;
    }
};
int main()
{
    Car C;
    //Initialization
    C.price=500;
    C.model_no=1001;
    C.name[0]='B';
    C.name[1]='M';
    C.name[2]='W';
    C.name[3]='\0';
    C.start();
}
