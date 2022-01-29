
// i/p :- 1,2,10,11,19,29,30
//o/p :- 30 29 19 11 10 2 1 


#include <bits/stdc++.h>
using namespace std;

void reverse_array(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
       swap(arr[start++],arr[end--]); 
    }
    
}
int main() {
	int arr[]={1,2,10,11,19,29,30};
    int n = sizeof(arr)/sizeof(int);
    reverse_array(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}

