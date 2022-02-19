#include <bits/stdc++.h>
using namespace std;

int printingsubarrays(int arr[],int n)
{
	//prefix sum logic
	int prefix_sum[n]={0};
	prefix_sum[0] = arr[0];
	for(int i=1;i<n;i++)
	{
		prefix_sum[i]=prefix_sum[i-1]+arr[i];
	}
	
	
	// largest sum logic
	int largest_sum =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
		{
		int subarray_sum=0;
		    subarray_sum = i>0 ? prefix_sum[j]-prefix_sum[i-1]: prefix_sum[j];
            // To check the largest sum 
			largest_sum = max(largest_sum,subarray_sum);
		}
		
    }
  return largest_sum;
    
}
int main() {
	int arr[]={10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
   cout<<printingsubarrays(arr,n);
    
	return 0;
}

