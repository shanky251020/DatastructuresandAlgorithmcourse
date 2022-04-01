#include <bits/stdc++.h>
using namespace std;
 
bool arePermutation(string A, string B)
{
    
    
    int n = A.length();
    int n1 = B.length();
    
    if(n!=n1)
    return false;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0;i<n;i++)
    {
        if(A[i]!=B[i])
        return false;
    }
    return true;
}