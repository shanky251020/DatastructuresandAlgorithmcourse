#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> arr={10,12,13,14,15};
    vector<int> visited(10,7);
    arr.push_back(16);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<arr.size();
    cout<<arr.capacity();
    arr.pop_back();
    
    for(int i=0;i<visited.size();i++)
    {
        cout<<visited[i];
    }
}
