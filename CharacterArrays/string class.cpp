#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n =5;
    string temp;
    vector<string> sarr; // vector of strings
    while(n--)
    {
    getline(cin,temp); // getting the i/p
    sarr.push_back(temp);  // inserting in the vector<string> sarr;
    }

    for(string x : sarr)   // traversing for the printing of the o/p
    {
        cout<<x<<endl;
    }
}

