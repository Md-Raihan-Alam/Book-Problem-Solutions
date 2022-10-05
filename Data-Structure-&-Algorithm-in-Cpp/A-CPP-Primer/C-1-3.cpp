#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1])
        {
            cout<<"Duplicates detected values are "<<v[i]<<" "<<v[i+1]<<endl;
            return 0;
        }
    }
    cout<<"No duplicates";
    return 0;
}