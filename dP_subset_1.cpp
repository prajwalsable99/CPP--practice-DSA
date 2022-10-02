#include<iostream>

using namespace std ;










bool subset_possible(int arr[], int n ,int target){
		
	bool dp[n+1][target +1];
	
	
	for(int j=0;j<target +1 ;j++){
		
		dp[j][0]=true;
	}
	for(int j=1;j<target +1 ;j++){
		
		dp[0][j]=false;
	}
	
	for(int i=1;i<n+1;i++){
		
		for(int j=1;j<target +1 ;j++){
			
				if(j< arr[i-1]){
					
					dp[i][j]=dp[i-1][j];
				}
				else{
					
					dp[i][j]=dp[i-1][j-arr[i-1]] ||dp[i-1][j];
						
			}
		}
			
	}
	
	
	for(int i=0;i<n+1;i++)
	{
			for(int j=0;j<target +1 ;j++){
				
				if(dp[i][j]==true){
					cout<<" T"<<'\t';
				}
				else{
					cout<<" F"<<'\t';
				}
			}
		cout<< endl;
		}
	
	return dp[n][target];
	

}

int main(){
	
	int set[] = {3, 4, 5, 2};
	
	
	cout<<subset_possible(set,4 ,6);
	return 0;
	
}
