#include<iostream>
#include <bits/stdc++.h>
using  namespace std;

// build max heap delete head of heap k-1 times; retun head    
/*

time complexity

	1.build heap using heapify  O(n)
	2.deletion of max k-1 (or can say k) times O(k*logn)
	
	total= O( n + klogn)  ==>klogn
	
	This can be also solved using creating minheap of size k and then further checkingn-k ele => O( k+ (n-k)logk ) ==>  nlogk
	
	
	code for that ==>

#include <vector>
#include <queue>
using namespace std;
 
// Function to find the k'th largest element in an array using min-heap
int findKthLargest(vector<int> const &ints, int k)
{
    // base case
    if (ints.size() < k) {
        exit(-1);
    }
 
    // create a min-heap using `std::priority_queue` and insert
    // the first `k` array elements into the heap
    // `std::greater` is used as the comparison function for min-heap
    priority_queue<int, vector<int>, greater<int>> pq(ints.begin(), ints.begin() + k);
 
    // do for remaining array elements
    for (int i = k; i < ints.size(); i++)
    {
        // if the current element is more than the root of the heap
        if (ints[i] > pq.top())
        {
            // replace root with the current element
            pq.pop();
            pq.push(ints[i]);
        }
    }
 
    // return the root of min-heap
    return pq.top();
}
 
int main()
{
    vector<int> ints = { 7, 4, 6, 3, 9, 1 };
    int k = 2;
 
    cout << "k'th largest array element is " << findKthLargest(ints, k);
 
    return 0;
}
	

*/

void heapify(int arr[],int i,int n){
	
	int temp,lrg,l,r;
	lrg=i;
	l=(2*i)+1;
	r=(2*i)+2;
	
	if(l<n && arr[l]>arr[lrg] ){
		
		lrg=l;
	}
	if(r<n && arr[r]>arr[lrg] ){
		
		lrg=r;
	}
	
	if(i!=lrg){
		
		temp=arr[lrg];
		arr[lrg]=arr[i];
		arr[i]=temp;
		
		heapify(arr,lrg,n);			
	}
	
}

void buildheap(int arr[],int n){
	
	int x=(n/2 )-1;
	
	for(int i=x;i>=0;i--){
		
		heapify(arr,i,n);			
	}
		
}

void kth_max(int arr[],int n,int k){
	
	buildheap(arr,n);
	
	for(int i=1;i<k;i++){
		
		arr[0]=arr[n-1];
		n=n-1;
		heapify(arr,0,n);
		
		
		
	}
	cout<<arr[0];
	
	
}


int main(){
	
	int arr[]={4,7,1,3,11,18,17};   //  1,3,4,7,11,17
	int len=sizeof(arr)/sizeof(arr[0]);
	
	cout<<endl;
	
	 kth_max(arr,len,3);
	
	
	return 0;
}	

