// Given an array of sorted array and integer val if val present return this otherwise less than val 
// sample test case 
// i/p : - -1 -1 2 3 5 val =4
// o/p : 3

// Hint : binary search this is the function to implement this is not the full code


#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    int start =0;
    int end = A.size()-1;
    while(start<=end)
    {
       int mid=(start+end)/2;
        if(A[mid]== Val)
        {
            return A[mid];
        }
        else if(A[mid]>Val)
        {
            end=mid-1;
        }
        else
        start=mid+1;
    }
    
    if(A[end]>Val)
    {
        return A[end-1];
    }
    else if(A[end]<Val)
    {
        return A[end];
    }
    else
    return -1;
    
}