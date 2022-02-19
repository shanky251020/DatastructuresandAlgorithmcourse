// This code will take consideration of the negative elements in the array

#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int current_sum=0;
    int largest_sum=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        current_sum+=A[i];
        if(current_sum>largest_sum)
        {
            largest_sum=current_sum;
        }
        if(current_sum<0)
        {
            current_sum=0;
        }
        
    }
    return largest_sum;
}