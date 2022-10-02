#include <bits/stdc++.h>
#define N 9
using namespace std;





int isSafe(int board[N][N],int x,int y,int val){
	
	//row
	for(int i=0;i<9;i++){
		
		if(board[x][i]==val){
			return 0;
		}
			
	}
	
	//col
	
	for(int i=0;i<9;i++){
		
		if(board[i][y]==val){
			return 0;
		}
			
	}
	
	int _x,_y;
	_x=(x/3)*3;
	_y=(y/3)*3;	
	
	for(int i=0;i<3;i++){
		for(int j=0;i<3;j++){
			
			if(board[i+_x][j+_y]== val){
				return 0;
			}
		}
	}
	
	return 1;
	
}


int solve(int board[N][N],int x,int y){
	
	if(x==N-1 and y==N){
		
		return  1;
	}
	
	if(y==N-1){
		x=x+1;
		y=0;
	}
	
	if(board[x][y]!=0){
		solve(board,x,y+1);
	}
	for(int i=1;i<=9;i++){
			
			int t=isSafe(board,x,y,i);
			if(t==1){
				board[x][y]=i;
				if(solve(board,x,y+1)==1){
					return 1;
				}
				board[x][y]=0;
			}
			
		}
			return 0;	
	}
	
	
	

	
	


int main(){
	
	
int board[][9] = { {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
         {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
         {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
         {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
         {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
         {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
         {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
         {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
         {0, 0, 5, 2, 0, 6, 3, 0, 0} };
         
	
	
	int x=solve(board,0,0);
	cout<<x;
	cout<<endl;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			
			cout<<board[i][j]<<" ";
	
		
		}
		cout<<endl;
	}
	
	
	
}

