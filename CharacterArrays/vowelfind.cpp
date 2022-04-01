#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    string s2;
    for(int i=0;i<S.length();i++)
    {
        if(S[i]=='a' || S[i]=='e'||S[i]=='i'||S[i]=='o'|| S[i]=='u')
        {
            s2.push_back(S[i]);
        }
    }
    return s2;
} 