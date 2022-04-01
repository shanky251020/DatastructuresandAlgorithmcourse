#include <iostream>
using namespace std;
int main() {
    int x=10;
    cout<< &x <<endl;
    // pointer variable
    int *xptr = &x;
    cout<<xptr<<endl;
    //Address of a pointer variable
    cout<<&xptr<<endl;
    int **xxptr = &xptr;
    cout<<xxptr<<endl;
}
