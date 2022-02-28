
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j = 1;
		//printing 1st triangle
		while(j<=n-i+1)
		{
			cout<<j<<" ";
			j=j+1;
		}

		// printing 1st stars
        int stars = i-1;
		while(stars)
		{
			cout<<"*"<<" ";
			stars--;
		}

		// printing 2nd stars
		int stars2 = i-1;
		while(stars2)
		{
			cout<<"*"<<" ";
			stars2--;
		}
		// printing 2nd triangle 
		int j2 = n-i+1;
		while(j2>=1)
		{
			cout<<j2<<" ";
			j2--;
		}

		i=i+1;
		cout<<endl;
	}
	return 0;
}

