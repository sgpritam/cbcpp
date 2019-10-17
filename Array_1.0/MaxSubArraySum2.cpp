#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[100];
    int cumSum[1000]={0};

    int MaximumSum=0;
    int CurrentSum=0;

    cin>>a[0];
    cumSum[0]=a[0];

    int left=-1;
    int right=-1;


    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        cumSum[i]=cumSum[i-1] + a[i];
    }
    // Generate all SubArrays

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // Element of subArray (i,j)
            CurrentSum=0;
            cumSum[i]=cumSum[j]-cumSum[i-1];
            // Update maximum if cs>maximumsum
            if(CurrentSum>MaximumSum)
            {
                CurrentSum = MaximumSum;
                left = i;
                right = j;
            }
        }
    }
   cout<<"MaximumSum is "<<MaximumSum<<endl;

   for(int k = left;k<=right;k++){
    cout<<a[k]<<","<<endl;
   }
}

