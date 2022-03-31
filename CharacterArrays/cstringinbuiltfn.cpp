#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[100] = "apple";
    char b[100];
    cout<<strlen(a)<<endl;
    strcpy(b,a);
    cout<<b<<endl;
    cout<<strcmp(b,a)<<endl;

    char web[100] ="www.";
    char domain[100] = "codingminutes.com";
    cout<<strcat(web,domain);

}
