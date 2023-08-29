#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<int> add_binary_integer(vector<int> a,vector<int> b,int n)
{
    int carry=0;
    vector<int> c(n+1,0);
    for(int i=n-1;i>=0;i--)
    {
        int total=a[i]+b[i]+carry;
        c[i]=total%2;
        carry=total/2;
    }
    c[0]=carry;
    return c;
}
signed main()
{
    vector<int> a={1,0,1,1};
    vector<int> b={1,1,0,1};
    int n=a.size();
    vector<int> c=add_binary_integer(a,b,n);
    for(auto x:c)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}