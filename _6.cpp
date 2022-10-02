#include <iostream>
using namespace std;
#define max 25

void  intersect(int arr1[],int n,int arr2[],int m){
	
	
	int i,j;
	i=j=0;

	while(i<n && j <m){
		
		if(arr1[i]==arr2[j]){
			
			cout<<arr1[i]<<" ";
			i++;
			j++;
			
		}
		else if (arr1[i]<arr2[j]){
			
			
			i++;
			
			
		}
		else{
			
			j++;
		}
		
		
	}
	
	cout<<endl;

	
}


void UNION(int arr1[],  int m,int arr2[], int n)
{
    int i = 0, j = 0;
    while (i < m and j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
  
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
  
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
  
    
    while (i < m)
        cout << arr1[i++] << " ";
  
    while (j < n)
        cout << arr2[j++] << " ";
}
  
int main(){
	

	
	int arr1[]={1,2,3,5,13};
	int arr2[]={2,5,7,11,13,17};
	
	 intersect(arr1,5, arr2,6);
	UNION(arr1,5, arr2,6);
	
	return 0;
}
	
	


