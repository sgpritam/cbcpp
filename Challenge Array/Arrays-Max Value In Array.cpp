#include<iostream>
#include<limits.h>
using namespace std;

  int kadane(int *a,int n){
      int mv=0,cv = INT8_MIN;
      for(int i=0;i<n;i++){
           if(a[i]>cv){
             cv = a[i];
           }
      }
      return cv;
  }

  int main(){
     int n;
     cin>>n;
     int a[100];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
      int ans = kadane(a,n);
      cout<<ans;
  }
