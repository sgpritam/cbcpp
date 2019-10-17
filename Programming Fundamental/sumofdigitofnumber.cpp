#include<iostream>
using namespace std;
int main(){
    int n;

    int sum = 0;
    //init
    cin >> n;
    while(n>0){
        int last_digit = n % 10;
        sum = sum + last_digit;

        //Update
        n = n/10;
    }
    cout<<"Sum is "<<sum<<endl;
    }


