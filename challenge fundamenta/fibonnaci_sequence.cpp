#include<iostream>
using namespace std;
int main(){
    int a = 0,b = 1,c = a+b;


    int n;
    cin>>n;

    cout<<"0,1,";
    int i = 2;


    while(i<n){
        cout<<c<<",";
        a=b;
        b=c;
        c = a+b;

        i = i+1;
    }
    return 0;

}
