#include <iostream>
using namespace std;
int main() {
 long long int n;
 cin>>n;
 if(n==1){
        cout<<-1;
            }else{
    if(n%2==0){

        long long int a=((n*n)/4)-1;
        long long int b=((n*n)/4)+1;

        cout<<a<<" "<<b;
    }else if(n%2!=0){
    long long int  a=((n*n)-1)/2;
    long long  int b=((n*n)+1)/2;
        cout<<a<<" "<<b;
    }
    else{
        cout<<-1<<endl;
    }
            }
    return 0;
}
