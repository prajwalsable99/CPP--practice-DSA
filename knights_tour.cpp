#include <bits/stdc++.h>
#include <queue>
#include <stack>
#include<map>
#define N 8
using namespace std;



void print(int arr[N][N]){
		for(int i=0;i<N;i++){
		
			for(int j=0;j<N;j++){
			
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
}



void solve(int arr[N][N],int x,int y,int move){
	
	if(x<0 or y<0 or x>=N or y>=N or arr[x][y]>-1){
		
		return ;
	}
	
	else if(move==64){
		
		arr[x][y]=64;
		
		print(arr);
		arr[x][y]=-1;
		
		return ;
	}
	
	
		
	
		arr[x][y]=move;
		solve(arr,x-2, y-1,move+1);
		solve(arr,x-1, y-2,move+1);
		solve(arr,x-2, y+1,move+1);
		solve(arr,x+1, y-2,move+1);
		solve(arr,x+2, y+1,move+1);
		solve(arr,x+1, y+2,move+1);
		solve(arr,x+2, y-1,move+1);
		solve(arr,x-1, y+2,move+1);
		arr[x][y]=-1;
		

	
	return;
	
	
}


int main(){
	
	
	int arr[N][N];
	for(int i=0;i<N;i++){
		
		for(int j=0;j<N;j++){
			
			arr[i][j]=-1;
		}
	}
	
	solve(arr,0,0,1);

	

}
