#include <iostream>
#include<cstring>
using namespace std;
int main() {
    int n ;
    cin>>n;
    cin.get() ; // to occupy the new line character otherwise it will read 1 less sentence everytime.
    char sentence[1000];
    char largest[1000];
    int len =0;
    int largest_len =0;
    while(n--)
    {
        cin.getline(sentence,1000);
        len = strlen(sentence);
        if(len>largest_len)
        {
            strcpy(largest,sentence);
        }
    }
    cout<<largest<<endl;
}
