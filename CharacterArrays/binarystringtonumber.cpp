#include <iostream>
#include <string>
#include<cmath>
using namespace std;
 
int binaryToDecimal(string s)
{
    int base =1;
    int decval =0;
    int n = s.length();
    for(int i= n-1;i>=0;i--)
    {
        if(s[i]== '1')
        {
            decval+=base;
        }
        base = base*2;
    }
    return decval;
}
 