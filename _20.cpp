#include <bits/stdc++.h>
using namespace std;



void alternate(int arr[] ,int n){
	
	// -ve on left <== pivot==> +ve on right   
	
	int piv=0;
	
	for(int i=0;i<n;i++){
		
		if(arr[i]<0){
			
			
			swap(arr[i],arr[piv]);
			piv++;
		}
	}
	cout<<piv<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}	
	// -4  -1  3  1  2  4
	//     piv
	int neg=0;
	int pos=piv;
	while(true){
		
		if(i%n==1 and arr[i]<0){
			
			i++;
			
		}
		
		
		
	}
	
}


int main(){
	
	int arr[]=	{1, 2, 3, -4, -1, 4};
	int n=sizeof(arr)/sizeof(arr[0]);
	alternate(arr,n);
	
}
