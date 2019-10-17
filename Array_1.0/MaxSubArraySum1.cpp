#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[100];
    int MaximumSum=0;
    int CurrentSum=0;
    int left=-1;
    int right=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // Generate all SubArrays

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // Element of subArray (i,j)
            CurrentSum=0;
            for(int k=i;k<=j;k++){
                CurrentSum +=a[k];
            }
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
