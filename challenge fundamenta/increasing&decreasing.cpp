#include<iostream>
using namespace std;
int main() {
    int i,s, n,no;
   long long int store=0;
    cin>>n;
    //for decreasing//
    for(i=1;i<=n;i++){
        cin>>no;

      if(no<store){
            store =no;

        if(i==n){
            cout<<"true";
        }
    }

    //for increasing//
        else{
            store=0;
            for(s=i;s<=n;s++){
                if(no>store){
                    store=no;
                }
                            if(i==n){
                cout<<"true";
            }



            }

        }


}

    return 0;

}




