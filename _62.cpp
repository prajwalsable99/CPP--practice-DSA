#include <bits/stdc++.h>
using namespace std;



bool balancedPara(string str){
	
	unordered_map<char,int>m={{'(',1},{'[',2},{'{',3},{')',-1},{']',-2},{'}',-3}};
	
	stack<char> st;
	char ch;
	for(int i=0;i<str.length();i++){
		
		
		ch=str[i];
		if(m[ch]>0){
			
			st.push(ch);
		}
		else if(st.empty()){
			
			return false;
		}
		else{
			
			if(m[ch]+m[st.top()]==0){
				st.pop();
			}
			else{
				return false;
			}
		}
	}
	
	return st.empty();
	
	
}


int main(){
	
	string str="{[(){}}]}";
	cout<<balancedPara(str);
	
	return 0;
}
