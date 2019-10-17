#include<iostream>
using namespace std;
int main() {
    int i,n,j,test_case,t;
    cin>>test_case;
    for(t=1;t<=test_case;t++){
    cin>>n;
    int a[100000];
    int cumsum[100000];
    for(i=0;i<n;i++){
        cin>>a[i];

        if(i==0)
            cumsum[i]=a[i];
        else
            cumsum[i]=cumsum[i-1]+a[i];
    }
    int cursum=a[0],maxsum=0;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            cursum=cumsum[j]-cumsum[i-1];
            if(cursum>maxsum){
                maxsum=cursum;
            }
        }
    }



    cout<<maxsum<<endl;
    }


	return 0;
}
