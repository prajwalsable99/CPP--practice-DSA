#include <bits/stdc++.h>
using namespace std;




int maxproduct(int arr[],int n){
	
	int prod;
	int ans=INT_MIN;
	
	for(int i=0;i<n;i++){
		
		prod=1;
		for(int j=i;j<n;j++){
			
			prod=prod*arr[j];
			if(prod>ans){
				
				ans=prod;
			}
			
			
		}
	}
	return ans;
	
}

int main(){
	int arr[]={ 1, -2, -3, 0, 7, -8, -2 };
	int n=sizeof(arr)/sizeof(arr[0]);
	int ans=maxproduct(arr,n);
	
	cout<<ans;
	return 0;
}
