// Given an array A, of N elements. Sort the array using mergesort algorithm.

#include<iostream>
using namespace std;
void merge(long long int* a,long long int s,long long int e){
	long long int	mid=(s+e)/2;
	long long int i,j,k;
	i=s;j=mid+1;k=s;
	long long int temp[1000000];   //change
	while(i<=mid && j<=e){
		if(a[i]>=a[j]){             //change
			temp[k++]=a[j++];
		}
		if(a[i]<a[j]){
			temp[k++]=a[i++];
		}
	}
	while(i<=mid){
		temp[k++]=a[i++];
	}
	while(j<=e){
		temp[k++]=a[j++];
	}
    for(long long int m=s;m<=e;m++){
        a[m]=temp[m];
    }
}
void mergeSort(long long int *a,long long int s,long long int e){
	if(s>=e){
		return ;
	}
	long long int	mid=(s+e)/2;

	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);

	merge(a,s,e);
}
int main() {
	long long int n;
	cin>>n;
	long long int a[n];
	for(long long int i=0;i<n;i++){
		cin>>a[i] ;
	}
	mergeSort(a,0,n-1);
	for(long long int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
