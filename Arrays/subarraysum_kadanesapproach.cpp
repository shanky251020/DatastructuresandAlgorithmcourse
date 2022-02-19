#include <bits/stdc++.h>
using namespace std;

int printingsubarrays(int arr[],int n)
{
 //kadanes algorithm approach 
int current_sum=0;
int largest_sum=0;
for(int i=0;i<n;i++)
{
	current_sum+=arr[i];
	if(current_sum<0)
	{
		current_sum=0;
	}
	largest_sum = max(current_sum,largest_sum);
}
  return largest_sum;
    
}
int main() {
	int arr[]={10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
   cout<<printingsubarrays(arr,n);
    
	return 0;
}

