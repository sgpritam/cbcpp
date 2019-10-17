/*
You are given an input array whose each element
represents the height of a line towers.
The width of every tower is 1. It starts raining.
Water is filled between the gap of towers if possible.
You need to find how much water filled between these given towers.


Example on geeksforgeeks

*/
#include<iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int arr[1000000];
long long int n;

cin>>n;
for(int i=0;i<n;i++){
	cin>>arr[i];
}

int Right[n] = {0};
int Left[n] = {0};

int cur=0;
int maxR=0;
for(int i=cur;i<n;i++){
	maxR = arr[i];
	for(int j=i;j<n;j++){
		if(maxR<arr[j]){
			maxR = arr[j];
		}
	}
	Right[i] = maxR;
}
//For Left Side find the max element
int maxL;
cur=n;
for(int i=cur;i>=0;i--){
maxL = arr[i];
for(int j=i-1;j>=0;j--){
if(maxL<arr[j]){
maxL = arr[j];
}
}
Left[i] = maxL;
}

int sum=0;
for(int i=0;i<n;i++){
	sum = sum + min(Right[i],Left[i]) - (arr[i]);
}
cout<<sum<<endl;
}
}
