#include <iostream>
using namespace std;



void rotateby1(int arr[],int n){
	
	int temp=arr[n-1];
	for (int i=n-1;i>0;i-- ){
		
		arr[i]=arr[i-1];
		
	}
	arr[0]=temp;
	
	
}

int main(){
	
	
	
	int arr1[]={1,2,3,5,13};
	
	rotateby1(arr1,5);
	for (int i=0;i<5;i++ ){
		
		cout<<arr1[i]<<" ";
		
	}
}
	
