#include <bits/stdc++.h>
using namespace std;

//int minjumps(int arr[],int s,int d){
	
	
//	
//	if(s>=d){
//		
//		return 0;
//	}
//	if(arr[s]==0){
//		return INT_MAX;
//	}
//	
//	int jump=INT_MAX;
//	int steps=arr[s];
//	for(int i=1;i<=steps and i<d ;i++){
//		int x=1+ minjumps(arr,s+i,d);
////		cout<<x<<" ";
//		jump=min(x,jump);
////			cout<<jump<< " ";
//	}
//	
//	return jump;
//}





int min_jumps(int arr[],int n){
	
	int ans[n];
	ans[0]=0;
	for(int i=1;i<n;i++){
		ans[i]=INT_MAX;
	}
	
	if (n == 0 || arr[0] == 0){
	
        return INT_MAX;
	}
	
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			
			if(arr[j]+j >=i and ans[j]!=INT_MAX){
				
				ans[i]=min(ans[i],ans[j]+1);
			}		
			
		}
		
	}
	return ans[n-1];
}




int main(){
	
	int arr[]={ 1, 3, 6, 3, 2,3, 6, 8, 9, 5 };
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<min_jumps(arr,n);
}
