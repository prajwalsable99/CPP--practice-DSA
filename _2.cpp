#include<iostream>
using namespace std;
struct Mm
{
	int min;
	int max;
};

struct Mm getMinMax(int arr[], int n)
{
	struct Mm x;	
	int i;

	if (n == 1)
	{
		x.max = arr[0];
		x.min = arr[0];	
		return x;
	}
	
	
	if (arr[0] > arr[1])
	{
		x.max = arr[0];
		x.min = arr[1];
	}
	else
	{
		x.max = arr[1];
		x.min = arr[0];
	}
	
	for(i = 2; i < n; i++)
	{
		if (arr[i] > x.max)	
			x.max = arr[i];
			
		else if (arr[i] < x.min)	
			x.min = arr[i];
	}
	return x;
}

// Driver code
int main()
{
	int arr[]={4,7,1,3,11,18,17};   //  1,3,4,7,11,17,18
	int len=sizeof(arr)/sizeof(arr[0]);
	
	 Mm obj = getMinMax(arr, len);
	
	cout<< obj.min <<" "<< obj.max;
		
	return 0;
}

// This code is contributed by nik_3112

