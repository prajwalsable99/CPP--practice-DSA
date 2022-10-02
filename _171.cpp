#include <bits/stdc++.h>
#include <queue>
#include <stack>
using namespace std;


vector<int> twoSum(vector<int>nums, int target) {
        
      
        int n=nums.size();
         vector<int>ans(2);
        for(int i=0;i<n-1;i++){
            
            for(int j=i+1;j<n;j++){
                
                if(nums[i]+nums[j]==target){
                   
                    ans[0]=nums[i];
                    ans[1]=nums[j];
                    cout<< nums[i]<<" "<<nums[j]<<" "<<endl;
                }
            }
        }
        
      return ans;  
        
    }
    
int main()
{
    cout<<"Hello World";
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(3);
    nums.push_back(6);
    nums.push_back(2);
    vector<int> ans=twoSum(nums,9);
	
	for (auto it :ans){
		cout<<it;
	}
    return 0;
}
