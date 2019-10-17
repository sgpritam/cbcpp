/*PATTERN NUMBERS & STARS - 1
Take as input N, a number. Print the pattern as given in output section for corresponding input.

*/
#include <iostream>
using namespace std;
int main() {
    int i=1,n;
    cin>>n;
    int temp=n;
    while(i<=n){
        int num=1,k=1;
        while(num<=temp){
            cout<<k<<" ";
            k=k+1;
            num++;
        }
          //space
        int space=1;
        while(space<=n-i){
           cout<<"";
            space++;
        }
        int k1=i-1;
        int star=1, temp1=2*k1-1;
        while(star<=temp1){
           cout<<"*"<<" ";
            star++;
        }
        cout<<endl;
        temp1++;
        temp--;
        i++;
    }
    return 0;
}
