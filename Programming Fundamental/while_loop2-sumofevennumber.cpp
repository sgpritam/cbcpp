#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int n;
    cin>>n;

    // Iterate over even number using loop
    int x = 2; //Init//
    while(x <= n){  //Tremination
        sum = sum + x;  //work
        x = x + 2; //Update

    }
    cout<<"Sum is "<<sum<<endl;
    return 0;

}
