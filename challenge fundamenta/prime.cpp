#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    //Logic for prime
    int i = 2;
    while(i <= n-1){
            //I need to check if n is divisible by some number i which lies in between 2 and n-1
       if(n%i==0){
        cout<<"Not Prime"<<endl;
    //<----Loop Stop----->
        break;
       }
       i = i +1;
    }
    //when the number is prime ?
    if(i == n){
        cout<<"Prime"<<endl;
    }
    return 0;
}
