
#include <bits/stdc++.h>
using namespace std;

void printingsubarrays(int arr[],int n)
{
	int largest_sum =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
		{
			int subarray_sum=0;
			for(int k=i;k<=j;k++)
			{
				subarray_sum+=arr[k];
				cout<<arr[k]<<",";
			}
			largest_sum = max(largest_sum,subarray_sum);
			
			cout<<endl;
		}
		
    }
	cout<<"Largest subarraysum is "<<largest_sum;
    
}
int main() {
	int arr[]={10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    printingsubarrays(arr,n);
    
	return 0;
}

