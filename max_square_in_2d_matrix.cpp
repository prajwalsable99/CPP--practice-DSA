#include<iostream>
using namespace std;

#define N 10

void maxSquare(int arr[][N],int r,int c){
	
	int dp[r][c];
	
	int m=INT_MIN;;
	for(int i =0;i<r;i++){
		
		dp[i][c-1]=arr[i][c-1];
	}
	for(int i =0;i<c;i++){
		
		dp[r-1][i]=arr[r-1][i];
	}
	
	for(int i=r-1;i>=0;i--){
		
		for(int j=c-1;j>=0;j--)
		{
			if(i==r-1 and j==c-1){
				
				dp[i][j]=arr[i][j];
			}
			else if(i==r-1){
				
				dp[i][j]=arr[i][j];
			}
			else if(j==c-1){
				dp[i][j]=arr[i][j];
				
			}
			else{
				if(arr[i][j]==0){
					dp[i][j]=0;
				}
				else{
					
					int val= min( dp[i+1][j+1], min(dp[i][j+1],dp[i+1][j] ) ) ;
			
					dp[i][j]=val+1;
					
				}	
				
			}
			
			m=max(m,dp[i][j]);
			
		}
		
		
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			
			cout<<dp[i][j]<<" ";
		}
	cout<<endl;
	}
	
	cout<<" MAX ==>"<<m <<" X "<<m;
	
	
	
}
int main(){
	
	int arr[6][N]= {{0, 1, 1, 0, 1},
                    {1, 1, 1, 1, 0},
                    {1, 1, 1, 1, 0},
                    {1, 1, 1, 1, 0},
                    {1, 1, 1, 1, 1},
                    {0, 0, 0, 0, 0}};
	
	 maxSquare(arr, 6,5);
	
	return 0;
	
}
