#include<iostream>
#define N 10
using namespace std ;



int mincost(int arr[N][N], int x,int y ){
	
	
	
	int dp[x][y];
	dp[0][0]=arr[0][0];
	
	for(int c =1; c<y;c++){
		
		dp[0][c]= arr[0][c] +dp[0][c-1];
	}
	for(int r =1; r<y;r++){
		
		dp[r][0]= arr[r][0] +dp[r-1][0];		
	}
	
	
	for(int i=1;i<x;i++){
		for(int j=1;j<y;j++){
			dp[i][j]= arr[i][j] +min( dp[i-1][j-1],  min (dp[i-1][j] ,dp[i][j-1])) ;	
		}	
	}
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){	
			cout<< dp[i][j]<<'\t';
		}
		cout<<endl;	
	}
	
	return dp[x-1][y-1];
	
	
}


int main()
{
   int cost[N][N] =  {
        { 4, 7, 8, 6, 4 },
        { 6, 7, 3, 9, 2 },
        { 3, 8, 1, 2, 4 },
        { 7, 1, 7, 3, 7 },
        { 2, 9, 8, 9, 3 }
    };
                      
                      mincost(cost, 5,5 );
   
   return 0;
}
