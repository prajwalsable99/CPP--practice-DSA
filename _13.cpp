#include <bits/stdc++.h>
using namespace std;



struct interval{
	
	int start;
	int end;
	
};

bool compare( interval i1, interval  i2) {
    return i1.start < i2.start;
}
void Mergeintervals( interval arr[],int n){
	
	sort(arr,arr+n,compare);
	
	stack<interval> mystack;
	mystack.push(arr[0]);
	
	int p_s,p_e,c_s,c_e;
	
	for (int i=1;i<n;i++){
		
		interval prev=mystack.top();
		
		p_s=prev.start;
		p_e=prev.end;
		
		c_s=arr[i].start;
		c_e= arr[i].end;
		
		
		if(c_s> p_e){
			mystack.push(arr[i]);
		}
		else{
			mystack.pop();
			mystack.push( {p_s,max(p_e,c_e)});
		}	
	}
	
	while (!mystack.empty()) {
        cout << ' ' << mystack.top().start <<' '<<mystack.top().end<<endl;
        mystack.pop();
    }
			
	
}

int main()
{

		
	struct interval arr[]= { {1,3} ,{2,6},{8,10},{15,18}};

	Mergeintervals( arr,4);
}

















/*

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        int px,py;
        px=intervals[0][0];
        py=intervals[0][1];
        int x,y;
        
      
        for(int i=1;i<intervals.size();i++){
            
            x=intervals[i][0];
            y=intervals[i][1];
            
            if(py>=x){
                
                px=px;
                py=max(y,py);
            }else{
                
                vector<int>v(2);
                v[0]=px;
                v[1]=py;
                
                res.push_back(v);
                px=x;
                py=y;
                
            }
            
            
        }
        res.push_back({px,py});
        
        return res;
    }


*/
