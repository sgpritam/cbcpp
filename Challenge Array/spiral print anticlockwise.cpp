/*
Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.
*/
#include<iostream>
using namespace std;
int main(){
    int M,N;
    cin>>M>>N;
    int arr[M][N];
    if((1<=M<=10) && (1<=N<=10)){
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
int frow=0;
int fcol=0;
int lrow= (M -1) ;
int lcol= (N - 1);
while(frow<=lrow && fcol<=lcol){
    for(int i = frow;i<=lrow;i++)
    {
        cout<<arr[i][fcol]<<","<<" ";
    }
    fcol++;

    for(int i = fcol;i<=lcol;i++)
    {
        cout<<arr[lrow][i]<<","<<" ";
    }
    lrow--;

    if(lrow>frow)
    {
    for(int i =lrow;i>=frow;i--)
    {
            cout<<arr[i][lcol]<<","<<" ";
    }
    lcol--;
    }

    if(lcol>fcol)
    {
    for(int i=lcol;i>=fcol;i--)
    {
            cout<<arr[frow][i]<<","<<" ";
    }
    frow++;
    }
}
cout<<"END";
}
return 0;
}
