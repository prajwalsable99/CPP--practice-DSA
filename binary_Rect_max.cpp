#include <bits/stdc++.h>
using namespace std;


int maxArea_inRow(vector<int> arr,int m){
        
        stack<int>st;
        vector<int> left(m),right(m);
        
        
        // next small to left;
        
        left[0]=-1;
        st.push(0);
        for(int i=1;i<m;i++){
            
            while(!st.empty()  and  arr[i]<=arr[st.top()]){
                
                st.pop();
            }
            if(st.empty()){
                
                left[i]=-1;
            }else{
                left[i]=st.top();
            }
            
            st.push(i);
            
        }
        
        
        while(!st.empty()){
            st.pop();
        }
        
        // next small to right;
        right[m-1]=m;
        st.push(m-1);
        for(int i=m-2;i>=0;i--){
            
            while(!st.empty()  and  arr[i]<=arr[st.top()]){
                
                st.pop();
            }
            if(st.empty()){
                
                right[i]=m;
            }else{
                right[i]=st.top();
            }
            
            st.push(i);
            
        }
        
        for(int i=0;i<m;i++){
            
            cout<<left[i] <<"  "<<right[i]<<endl;
        }
        
        int ans=INT_MIN;
        
        for(int i=0;i<m;i++){
            
            ans=max(ans,(right[i]-left[i]-1)*arr[i]);
        }
        return ans;
        
        
        
    }
int main()
{
    vector<int> arr={6,2,5,4,5,1,6};
    cout<<maxArea_inRow( arr,7);
    
}

