#include<iostream>
using namespace std;
int x,y;
public:
    {

    Newton(int xx = 10,int yy=10){
        x = xx;
        y=yy;
    }
    void show()
    {
        cout<<x*y<<endl;
    }
    };
    class School :public Newton {
private:
    Newton objBase;
public:
School(int xx,int yy):Newton(xx,yy){
    objBase.Show();
}
};
int main(){
    School objDev(10,20);
    return 0;
}
