#include <iostream>
using namespace std;

int binary_search(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start= mid+1;
        }
        else
        end=mid-1;
    }
    return -1;
}
int main() {
	int arr[]={1,2,10,11,19,29,30};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index =binary_search(arr,n,key);
    if(index!=-1)
    {
        cout<<key<<"Element found at index"<<index<<endl;
    }
    else
    cout<<"Not found"<<endl;
	return 0;
}

