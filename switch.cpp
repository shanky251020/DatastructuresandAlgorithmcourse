#include <iostream>
using namespace std;
int main() {
    int a ,b;
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<"Enter the value of b :";
    cin>>b;
    char op;
    cin>>op;
    switch(op)
    {
        case '+':cout<<a+b<<endl;
        break;
        case '-':cout<<a-b<<endl;
        break;
        case '*':cout<<a*b<<endl;
        break;
        case '/':cout<<a/b<<endl;
        break;
        default:cout<<"operation not allowed"<<endl;
        break;
    }
}
