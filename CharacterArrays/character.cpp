#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[] = {'a','c','b','h','\0'};
    char b[] = "acbh";
    char c[100] ;
    cin>>c;
    cout<<c<<endl;
    cout<<a<<endl<<b<<endl;
    cout<<strlen(a)<<endl; // It gives the no. of the character in the char array
    cout<<sizeof(a)<<endl; // It gives the size char is 1 byte there is null character too so size is 5
    cout<<strlen(b)<<endl;
    cout<<sizeof(b)<<endl;
}
