#include <bits/stdc++.h>
using namespace std;


void rev(string& str){
	int i=0;
	int j=str.length()-1;
	
	while(i<j){
		
		swap(str[i],str[j]);
		i++;
		j--;
	}
	
	
}

int main(){
	
	string str="prajwal";
	
	rev(str);
	
	cout<<str;
}
