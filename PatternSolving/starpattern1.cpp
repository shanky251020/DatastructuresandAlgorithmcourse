#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i =0;
	while(i<n)      // row wise 0,1,2,3,.....n-1
	{
		int j=0;
		while(j<n)    // column wise 0,1,2,3,...... n-1
		{
			cout<<"*"<<" ";
			j=j+1;
		}
		cout<<endl; // after printing one row we have to print second row in second line 
		i=i+1;
	}
	return 0;
}