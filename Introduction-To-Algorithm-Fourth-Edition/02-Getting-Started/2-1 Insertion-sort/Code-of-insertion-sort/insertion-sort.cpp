#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void insertionSort(vector<int> &v)
{
    for(int i=1;i<v.size();i++)
    {
        int j=i-1;
        int key=v[i];
        while(j>=0 && v[j]>key)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
}
signed main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v)
        cin>>x;
    insertionSort(v);
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
}