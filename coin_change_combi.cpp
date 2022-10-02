#include <bits/stdc++.h>
using namespace std;


int coinchange_combi(int arr[],int n,int k){
	
	int dp[k+1];
	memset(dp, 0, sizeof(dp));
	dp[0]=1;

	for(int i=0;i<n;i++){
		for(int j=arr[i];j<k+1;j++){
			
			dp[j]=dp[j]+dp[j-arr[i]];				
		}	
	}
	
	return dp[k];
	
	
	
}


int main(){
	
	int arr[]={2,3,5};
	
	/* for 2 3 5 6 k=10
	2 2 2 2 2 
	2 2 3 3
	2 3 5 
	5 5 
	 2 2 6
	*/
	
	
	cout<<coinchange_combi(arr,3,7);
	
	return 0;
}
