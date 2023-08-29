#include<iostream>
#include<vector>
using namespace std;
#define int long long
#define endl "\n"
void selection_sort(vector<int> &v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        int mn=i;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j]<v[mn])
            {
                mn=j;
            }
        }
        swap(v[i],v[mn]);
    }
}
signed main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    selection_sort(v);
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
}