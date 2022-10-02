
#include <bits/stdc++.h>
using namespace std;

void max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        
        vector<int>ans(n);
        stack<int>st;
        st.push(n-1);
        ans[n-1]=-1;
        
        for(int i=n-2;i>=0;i--){
            
            while(!st.empty() and arr[st.top()]<=arr[i]){
                
                st.pop();
            }
            if(st.empty()){
                ans[i]=-1;
            }else{
                ans[i]=st.top();
            }
            st.push(arr[i]);
        }
        for(int i=0;i<n;i++){
        	
        	cout<<ans[i]<<" ";
		}
        vector<int>res; int j=0;
        for(int i=0;i<= n-k; i++){
            
            if(j<i){
                j=i;
            }
            
            while(ans[i]<i+k){
                j=ans[j];
            }
            cout<<arr[j]<<" ";
        }
        
      
        
        
    }
    
    
    
    int main()
{
	int arr[] = { 1,2,3,1,4,5,2,3,6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	max_of_subarrays(arr,  n, 3);


	return 0;
}
