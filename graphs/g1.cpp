#include <bits/stdc++.h>

using namespace std;



vector<int>v[] createGraph(int v,int e){

			vector<int> graph[v];
			
			int x,y;
			for(int i=0;i<e;i++){
				cout<< " \nenter v1  and v2 for "<< i+1<<"th edge: ";
				cin>>x;
				cin>>y;
				
				graph[x].push_back(y);
    			graph[y].push_back(x);
				
			}	
			
			return graph;
 	
 	
 }
 
 void printGraph(vector<int>graph[] ,int v ){
 	
 	for (int i = 0;i < v; i++)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : graph[i])
           cout << "-> " << x;
        
        cout<<endl;
    }
 }

int main(){
	
	vector<int> g[]=createGraph(3,3);
	
	printGraph(g,3 );
	
	
	
	
}
