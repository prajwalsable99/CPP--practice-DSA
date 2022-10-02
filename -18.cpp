#include <bits/stdc++.h>
using namespace std;





int twoSum(int arr[],int n,int k){
	
	int count=0;
	for(int i=0;i<n-1;i++){
		
		for(int j=i+1;j<n;j++){
			
			
			
			if (arr[i]+arr[j]==k){
				
				count++;
				
				cout<<arr[i]<<" "<<arr[j]<<endl;
			}
		}
	}
	
	return count;
}


	
int twoSum2(int arr[],int n,int k){
	
	int count=0;

	
	
	unordered_map<int, int> m;
   
    
    for (int i = 0; i < n; i++) {
        if (m.find(k - arr[i]) != m.end()) {
            count += m[k - arr[i]];
        }
        m[arr[i]]++;
    }	
	
	for(auto it : m){
  		cout<< it.first << " " << it.second << endl;
	}		
	
	
	return count;
}







int main(){
	
	
	int arr[]={1, 5, 7, 1,3,4,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k= 6;
	int x=twoSum2(arr,n,k);
	
	cout<<"COUNT :"<<x;
	
	
}
