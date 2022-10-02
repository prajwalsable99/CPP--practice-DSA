#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& arr,int n){
    int min_i=-1;
    for(int i=0;i<n-1;i++){
        min_i= i;
        for(int j=i+1;j<n;j++){
            
            if(arr[j]<arr[min_i]){
                j=min_i;
            }
            
        }
        swap(arr[min_i],arr[i]);
    }
    
    
}
 int solve(vector<int>arr){
 	
 	int ans=0;
 	for(int i=0;i<arr.size()-1;i++){
 		
 		if(arr[i]<arr[i+1]){
 			ans =ans + (arr[i+1]-arr[i]);
 			arr[i+1]=arr[i];
		 }
 		
	 }
 	return ans;
 }
int main() {
    // Write C++ code here
    cout << "Hello world!";
    vector<int> arr{3,2};
//    selection_sort(arr,7);
  //  for(int i=0;i<arr.size();i++)
	cout<<fun(arr);

    return 0;
}
