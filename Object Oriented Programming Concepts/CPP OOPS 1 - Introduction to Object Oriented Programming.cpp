#include<iostream>
using namespace std;

class Car{
public:
    int price;
    int model_no;
    char name[20];
};
int main()
{

    int x;
    Car C;
    cout<<sizeof(C)<<endl;
    cout<<sizeof(Car)<<endl;
}
