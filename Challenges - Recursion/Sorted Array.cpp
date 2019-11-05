#include <iostream>
using namespace std;


int isSorted(long long int a[],long long int n,int searching_element)
{
    //base case
    if(searching_element == n-1)
        return 1;
    //recursive case for positive numbers
        if(a[searching_element]<=a[searching_element+1])
        {
            if (isSorted(a,n,searching_element+1))
                return 1;
            else
                return 0;
        }
        else
            return 0;


}

int main() {

   long long int n;
   cin>>n;
   long long int b = 100000000;
   long long int a[b];
   for(int i = 0; i<n;i++)
        cin>>a[i];
    int ans  = isSorted(a,n,0);
    if(ans == 0)
        cout<<"false"<<endl;
    else
        cout<<"true"<<endl;


}
