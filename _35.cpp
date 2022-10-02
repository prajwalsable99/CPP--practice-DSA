#include <bits/stdc++.h>
using namespace std;


void med_2eq_array(int arr1[],int arr2[],int n){
	
	int count =0;
	
	int i=0 ,j=0;
	while(i<n and j<n  and count!=n){
		
		
		if(arr1[i]<arr2[j]){
			
			i++;
			count++;
		}
		else if(arr1[i]>arr2[j]){
			j++;
			count++;
		}
		
		else{
			i++;j++;
			count++;
		}
		
		
	}
	if(count==n){
		
		cout<< (arr1[i-1]+arr2[j])/2;
	}
	
	
}

int main()
{
    int ar1[] = {1, 12, 15, 26, 38};
    int ar2[] = {2, 13, 17, 30, 45};
 
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    
         med_2eq_array(ar1, ar2, n1) ;
    
    return 0;
}
