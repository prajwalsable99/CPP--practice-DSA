#include <bits/stdc++.h>
using namespace std;

void longest_pall(string& str){
	
	int mx=1;
	int from ,till;
	int n=str.size();
	
	int arr[n][n];
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j+i<n;j++){
			
			from=j;
			till=j+i;
			
				
			if(i==0){
				
				arr[from][till]=1;
				
				
			}
			else if(i==1){
				
				if (str[from] == str[till]) {
				
					arr[from][till]=1;
					mx=2;
				}
				else{
					arr[from][till]=0;
				}
            	
            	
			}
			else {
				
				if (arr[from+1][till-1]==1 and str[from] == str[till]){
					arr[from][till]=1;
					
					mx=max(mx,i+1);
					
					
				}
				else{
					arr[from][till]=0;
				}
				
				
			}
		
		}
		
		
		
	}
	
	
//	for(int i=0;i<n;i++){
//		int gap=i;
//		for(int j=0;j+gap<n;j++){
//			
//			
//			cout<<arr[j][j+gap]<<" ";
//			
//		}
//	cout<<endl;
//	}
//

	cout<<" MAX: "<<mx;

	
	
	
}
int main(){
	
	string str="maam" ; 
	longest_pall(str);
	
	
	return 0;
}
