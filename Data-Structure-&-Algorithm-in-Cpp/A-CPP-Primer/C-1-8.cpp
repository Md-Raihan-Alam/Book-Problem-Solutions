#include<iostream>
#include<vector>
using namespace std;
vector<double> productC(vector<double> a,vector<double> b)
{
    vector<double> c;
    for(int i=0;i<a.size();i++)
    {
        c.push_back(a[i]*b[i]);
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    vector<double> a(n);
    vector<double> b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<n;j++)
        cin>>b[j];
    vector<double> c=productC(a,b);
    for(auto x:c)
        cout<<x<<" ";
    return 0;
}