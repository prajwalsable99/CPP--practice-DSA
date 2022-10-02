#include<iostream>
#define N 10
using namespace std ;









int coin_change(int arr[],int n,int target){
	
	int dp[n+1][target +1];
	
	for(int j=0;j<target +1 ;j++){
		
		dp[j][0]=1;
	}
	for(int j=1;j<target +1 ;j++){
		
		dp[0][j]=0;
	}
	
	
	for(int i=1;i<n+1;i++){
		
		for(int j=1;j<target +1 ;j++){
			
				if(arr[i-1]>j){
					dp[i][j]=dp[i-1][j];
					
				}
				else{
					
					dp[i][j]=dp[i-1][j] + dp[i][j-arr[i-1]] ;
				}
						
			}
		}
		
		
		
			
	
	

	
	
	return dp[n][target];
}

int main(){
	
	int set[] = {2,4,3,};
	
	
	cout<<coin_change(set,3,7);
	return 0;
	
}
