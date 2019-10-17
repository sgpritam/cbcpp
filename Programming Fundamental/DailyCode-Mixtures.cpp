#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll left(int* arr,int i,int k){
	ll sum=0;
	for(int j=i;j<=k;j++){
		sum+=arr[j];
		sum%=100;
	}
	return sum;
}

ll right(int *arr,int i,int j){
	ll sum=0;
	for(int k=i;k<=j;k++){
		sum+=arr[k];
		sum%=100;
	}
	return sum;
}
int dp[101][101];

ll Mixtures(int *arr,int i,int j){
	if(i>j)
	return 0;
	if(dp[i][j]!=-1)
	return dp[i][j];
	ll ans=INT_MAX;
	for(int k=i;k<j;k++){
		ans=min(ans,Mixtures(arr,i,k)+Mixtures(arr,k+1,j)+left(arr,i,k)*right(arr,k+1,j));
	}
	if(ans!=INT_MAX){
	    dp[i][j]=ans;
	    return ans;
	}

	return 0;
}

int main() {

	int n;
	while(scanf("%d",&n)!=EOF){
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int  i=0;i<101;i++){
		    for(int j=0;j<101;j++){
		        dp[i][j]=-1;
		    }
		}
		cout<<Mixtures(arr,0,n-1)<<endl;

	}

	return 0;
}
