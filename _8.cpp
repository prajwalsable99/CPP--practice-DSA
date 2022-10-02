#include <bits/stdc++.h>
using namespace std;




void kadane(int arr[],int l){
	
	int curr_max, overall_max;
	curr_max=overall_max=arr[0];
	
	
	for(int i=0;i<l;i++){
	
		curr_max=max(arr[i], curr_max+arr[i] );
		overall_max=max(curr_max,overall_max);
		
	}
	
	cout<<overall_max;
}

int main(){
	
	
	
	int arr1[]= {-2, -3, 4, -1, -2, 1, 5, -3};
	
	kadane(arr1,8);
	return 0;
}

