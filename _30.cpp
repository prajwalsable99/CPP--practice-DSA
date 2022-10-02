#include <bits/stdc++.h>
using namespace std;




int chocolatedis(int arr[],int n,int k){
	
	if (k == 0 || n == 0)
        return 0;
 
    sort(arr, arr + n);
 
   
    if (n < k)
        return -1;
	
	
	int minv=INT_MAX;
	
	for(int i=0; i<n-k+1;i++){
		
		if (arr[k+i-1]-arr[i]<minv  ){
			minv=arr[k+i-1]-arr[i];
		}
	}
	cout<< minv;
	return minv;
}

int main(){
	int arr[]={3, 4, 1, 9, 56, 7, 9, 12};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=5;
	chocolatedis(arr,n,k);
	
	return 0;
}
