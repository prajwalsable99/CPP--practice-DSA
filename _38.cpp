#include <bits/stdc++.h>
using namespace std;


int findele(vector < vector<int> > matrix,int x){
	int r,c;
	r=0;c=0;
	
	int R = matrix.size()-1, C = matrix[0].size()-1;
	
	int smallest = matrix[0][0], largest = matrix[R -1][C- 1];
    if (x < smallest || x > largest)
        return -1;
   
    
    
    int i = 0, j = C - 1;
    while (i < R && j >= 0)
    {
        if (matrix[i][j] == x)
        {
            cout << "n Found at "
                 << i << ", " << j;
            return 1;
        }
        if (matrix[i][j] > x)
            j--;
       
        
        else
            i++;
    }
 
    cout << "n Element not found";
    return -1;
	
	
	
    
	
	
	
}

int main(){
	
		vector<vector<int>>matrix{ {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
                            
                            
   	for (int k = 0 ; k < matrix.size () ; k = k + 1) {
    	for (int l = 0 ; l < matrix [k].size () ; l = l + 1) {
       		 cout << matrix [k] [l] << ' ' ;
    	}
	}
    cout << endl ;
	
	
	int x=findele( matrix,29);



}
                            
                            
                        
