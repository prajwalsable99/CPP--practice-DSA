#include <bits/stdc++.h>
using namespace std;


void getMaxprofit(int arr[],int n){
	
	int max_profit=0;
	int curr_profit=0;
	
	int _min=INT_MAX;
	
	for(int i=0;i<n;i++){
		
		if(arr[i]<_min){
			
			_min=arr[i];
			
			
		}
		curr_profit=arr[i] - _min;
		max_profit=max(max_profit,curr_profit);
	}
	
	cout<<max_profit<<endl;
	
	
	
}


int main(){
	
	
	int arr[]={7,6,4,3,1};
	getMaxprofit(arr,sizeof(arr)/sizeof(arr[0]));
	
	
	
}
