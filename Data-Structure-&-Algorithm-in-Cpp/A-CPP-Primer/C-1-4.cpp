#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(auto x:v)
        if(x%2!=0)
            cout<<x<<" ";
    return 0;
}