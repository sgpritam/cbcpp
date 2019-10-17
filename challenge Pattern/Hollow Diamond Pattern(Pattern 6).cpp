/*
#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++){
        i<=3 ? k++ : k--;
        for(j=1;j<=5;j++){
            if(j<=4-k || j>=2+k)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}
*/
/*HOLLOW DIAMOND PATTERN(PATTERN 6)
Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *

*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<'*'<<" ";
    }
    cout<<endl;
    int a=n/2;
    for(int i=0;i<n-2;i++){
        if(i<a)
        for(int j=0;j<a-i;j++){
            cout<<'*'<<" ";
        }
        else{
            for(int j=0;j<=i-a+1;j++){
                cout<<'*'<<" ";
            }

        }
        if(i<a)
        for(int j=0;j<2*i+1;j++){
            cout<<" "<<" ";
        }
        else{
            for(int j=0;j<2*(n-2-i)-1;j++){
                cout<<" "<<" ";
            }
        }
        if(i<a){
            for(int j=0;j<a-i;j++){
                cout<<'*'<<" ";
            }
        }
        else{
            for(int j=0;j<=i-a+1;j++){
                cout<<'*'<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<'*'<<" ";
    }
    cout<<endl;

}

