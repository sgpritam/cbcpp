#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    int a[1000000];
    for(long long int i =0;i<n;i++){
        cin>>a[i];
    }
    long long int low=0,mid=0,high =n-1;
    while(mid<= high){
        if(a[mid]==0){
            swap(a[mid],a[low]);
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }
    for(long long int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
