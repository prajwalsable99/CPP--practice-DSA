#include<iostream>
using  namespace std;


void reverseArray(int arr[],int n){
	int i,j,temp;
	i=0;
	j=n-1;		
	while(i<=j){
		
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
		
	}
	
}


void reverseArrayRec(int arr[],int i,int j){
	
	
	int temp;		
	if(i<=j){
		
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		
		reverseArrayRec(arr,i+1,j-1);
		
		
	}
	
}



int main(){
	
	int arr[]={1,2,3,4,5,6};
	int len=sizeof(arr)/sizeof(arr[0]);
	
//	reverseArray(arr,len);
	
	reverseArrayRec( arr,0,len-1);
		
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
