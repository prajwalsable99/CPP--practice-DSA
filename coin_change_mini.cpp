#include <bits/stdc++.h>
using namespace std;




int coinchange_minimum(int arr[],int n,int k){
	
	int dp[k+1];
	for (int i=1; i<=k; i++)
        dp[i] = INT_MAX-1;
 	
	dp[0]=0;

	for(int i=1;i<k+1;i++){
		for(int j=0;j<n;j++){
			
			if(arr[j]<=i)
			
			dp[i]=min(dp[i],dp[i-arr[j]] +1);				
		}	
	}

	return dp[k];
	
	
	
}








int main(){
	
	int arr[]={9, 6, 5, 1};
	
	
	
	
	cout<<coinchange_minimum(arr,4,11);
	
	return 0;
}
