#include <bits/stdc++.h>
using namespace std;




int coinchange_permu(int arr[],int n,int k){
	
	int dp[k+1];
	memset(dp, 0, sizeof(dp));
	dp[0]=1;
	

	for(int i=1;i<k+1;i++){
		for(int j=0;j<n;j++){
			
			if(arr[j]<=i)
			
			dp[i]=dp[i]+dp[i-arr[j]];				
		}	
	}
	
	return dp[k];
	
	
	
}








int main(){
	
	int arr[]={2,3,5};
	
	/* for 2 3 5 6 k=7
	
	2 2 3
	2 3 2
	3 2 2
	2 5
	5 2
	
	*/
	
	
	cout<<coinchange_permu(arr,3,7);
	
	return 0;
}
