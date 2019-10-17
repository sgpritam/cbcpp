/*
Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that selection sorts the array. Print the elements of sorted array.

1.It reads a number N.
2.Take Another N numbers as input and store them in an Array.
3.Sort the array using Selection Sort and print that Array.



*/
#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;

 int i,j,a[n],min;

 for(i=0;i<n;i++)
  cin>>a[i];

 for(i=0;i<n-1;i++)
 {
      min=i;
    for(j=i+1;j<n;j++)
    {

        if(a[min]>a[j])
          min=j;
    }
       swap(a[min],a[i]);
 }


 for(i=0;i<n;i++)
   cout<<a[i]<<endl;

  return 0;
}

