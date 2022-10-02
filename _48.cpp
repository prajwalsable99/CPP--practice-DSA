#include <bits/stdc++.h>
using namespace std;



bool pallin(string& str){
	
	int i=0;
	int j=str.length()-1;
	
	while(i<j){
		
		if(str[i]!=str[j]){
			
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main(){
	
	string str="madaasdaddam";
	
	bool x=pallin(str);
	
	cout<<x;
}
