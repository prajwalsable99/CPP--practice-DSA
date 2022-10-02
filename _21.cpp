#include <bits/stdc++.h>
using namespace std;



bool isZero(int arr[],int n){
	
	unordered_set<int>s;
	int sum=0;
	for(int i=0;i<n;i++){
		
		sum=sum+arr[i];
		if(s.find(i)!=s.end() || sum==0){
			
			return true;
		}
		
		s.insert(sum);
	}
	return false;
}

int main(){
	int arr[]={4, 2,0, 1, 6};
	int n=sizeof(arr)/sizeof(arr[0]);
	bool flag=isZero(arr,n);
	
	cout<<flag;
	return 0;
}
