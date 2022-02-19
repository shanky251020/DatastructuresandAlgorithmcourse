/* 
sample i/p : - 

 Returns the largest element
-3 4 1 2 3
-1 -2 -3 -3 8 

sample o/p
4
8

Function below 
*/
#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int max=arr[0];
	for(int i=1;i<arr.size();i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
     
}
