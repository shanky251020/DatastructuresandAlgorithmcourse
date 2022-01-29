
#include <iostream>
using namespace std;

int main() {
	int marks[100];
    int n;
    cout<<"Enter number of students";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
        //update an array by multiplying by 2
        marks[i]=marks[i]*2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<marks[i]<<",";
    }

	return 0;
}
