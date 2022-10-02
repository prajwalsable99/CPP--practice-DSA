#include<iostream>
#define N 10
using namespace std ;



void goldMine(int arr[N][N] ,int n,int m){
	
	
	
	int dp[n][m];
	
	for(int i=0;i<n;i++){
		
		dp[i][m-1]=arr[i][m-1];
	}
	
	
	for(int j=m-2;j>=0;j--){
		for(int i=0;i<n;i++){
			
			if(i==0 ){
				
				dp[i][j]=max(dp[i][j+1], dp[i+1][j+1])  + arr[i][j];
			}
			if(i==n-1){
				
				
				dp[i][j]=max(dp[i][j+1], dp[i-1][j+1])  + arr[i][j];
				
			}
			else{
				
				
				dp[i][j]=  max(dp[i-1][j+1],max(dp[i][j+1], dp[i+1][j+1]) )   + arr[i][j];
				
				
				
			}
		}
		
	}
	int M=-1;
	for(int i=0;i<n;i++){
		
		if(M< dp[i][0]){
			
			M=dp[i][0];
		}
		
	}
	
	cout<< M;
	
	
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			
//			cout<<dp[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	
	
	
	
}
int main(){
	
	
	int arr[N][N]={{10, 33, 13, 15},
                  {22, 21, 04, 1},
                  {5, 0, 2, 3},
                  {0, 6, 14, 2}};
	
goldMine(arr ,4,4);
	
	return 0;
}
