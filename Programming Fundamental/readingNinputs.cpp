#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cin>>n;

    int i,no;

    i=1;
    while(i<=n){
        cin>>no;
        sum = sum + no;
        //cout<<no<<",";
        i = i + 1;
    }
    cout<<"Sum is "<<sum<<endl;
    float avg;
    avg = float(sum)/n;
    cout<<"Average is "<<avg<<endl;
    return 0;
}

