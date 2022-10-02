#include <bits/stdc++.h>
using namespace std;


void dupli(string& str ){
	
	
	unordered_map<char,int> m;
	
	for (int i = 0; i < str.length(); i++) {
        
		m[str[i]]++;
	}
	
	for (auto it : m){
		
		if(it.second>1){
			cout << it.first << "   " << it.second<<endl;
             
		}
	}
	
	
	
	
	
}

int main(){
	
	string str= "11222333344444555555";
	dupli(str );
	return 0;
}
        
