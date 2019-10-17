#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    for(int i=1;i<n+1;i++){
        if(i==1)
        {
            cout<<1;
        }
        else
        {
            int j=2;
            int counter=0;
            while(j<=i-1)
            {
                if(i%j==0)
                {
                   break;
                }
                else
                {
                    j++;
                }
            }
            if(j==i)
            {
                for(int k=0;k<i;k++)
                {
                    cout<<1<<"";
                }
            }
            else
            {
                cout<<1<<"";
                for(int k=1;k<i-1;k++)
                {
                    cout<<0<<"";
                }
                cout<<1<<"";
            }
        }
        cout<<endl;
    }

	return 0;
}
