// fn for the code of check palindrome 

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int start=0;
    int end = str.length()-1;
    while(start<end)
    {
        if(str[start++]!=str[end--])
        {
            
            return false;
        }
    }
    return true;

}