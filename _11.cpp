#include <bits/stdc++.h>
using namespace std;

/*
given  array of n integers 

	where each integer  is from 0 to n-1   
	
	ex: 1 2 2 3   n=4;  all is<n   
*/ 
void printDuplicates(int arr[],int n){
	
	for(int i=0;i<n;i++){
		
		arr[arr[i]%n] = arr[arr[i]%n] +n;
	}
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		
		if(arr[i]>= 2*n){
			
			cout<<i<<" ";
		}
	}
	
	
	
	
}



int main(){
	
	int arr[]={1,2,2,0,0,5,6};  
	
	
	
	printDuplicates(arr,sizeof(arr)/sizeof(arr[0]));
}
