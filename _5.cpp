#include <bits/stdc++.h>
using namespace std;

/*

 3,4,-1,5.-2,1,-67

*/

void neg_pos(int arr[],int n){
	
	int j=0;
	
	
	
	for(int i=0;i<n;i++){
		
		if(arr[i]<0){
			
			if(i!=j){
				swap(arr[i],arr[j]);
				
			}
			j++;	
		}
			
	}
}


int main(){
	
	int arr[]={-1444,3,4,-1,5.-2,1,-67};
	int n = sizeof(arr) / sizeof(arr[0]);
	neg_pos(arr,n);
	
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	
	
	
}
