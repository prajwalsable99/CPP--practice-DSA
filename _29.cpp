#include <bits/stdc++.h>
using namespace std;


int maxWater(int arr[], int n)
{
     
    
    int res = 0;
     
    
    for (int i = 1; i < n-1; i++) {
         
        
        int left = arr[i];
        for (int j=0; j<i; j++)
           left = max(left, arr[j]);
         
        int right = arr[i];
        for (int j=i+1; j<n; j++)
           right = max(right, arr[j]);
        
       
       res = res + (min(left, right) - arr[i]);  
    }
 
    return res;
}

void Water(int arr[],int n){
	
	int ml[n],mr[n];
	
	ml[0]=arr[0];
	mr[n-1]=arr[n-1];
	
	
	for (int i=1;i<n;i++){
		
		ml[i]=max(ml[i-1],arr[i]);
		
		
	}
	for(int i=n-2;i>=0;i--){
		
		mr[i]=max(mr[i+1],arr[i]);
	}
	
//	printArr(arr,n);
//	printArr(ml,n);
//	printArr(mr,n);

	int sum=0;
	int wt=0;
	for (int i=0;i<n;i++){
		wt=min(ml[i],mr[i])-arr[i];
		sum=sum + wt;
	}
	
	cout<<sum;
	
	
	
}



void printArr(int arr[],int n){
	
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<'\t';
	}
	cout<<endl;
}


int main(){
	int arr[]={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n=sizeof(arr)/sizeof(arr[0]);
	Water(arr,n);
	
	return 0;
}
