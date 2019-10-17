#include<iostream>
using namespace std;
int main(){
    int i = 1;
    while(i<=10){
        cout<<i<<endl;
        if(i==7){
            break;
        }
        i = i+1;
    }
}
