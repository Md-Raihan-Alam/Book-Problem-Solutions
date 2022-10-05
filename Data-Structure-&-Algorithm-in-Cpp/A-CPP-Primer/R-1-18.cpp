#include<iostream>
using namespace std;
bool isMultiple(long m,long n)
{
    if(n%m==0)
        return true;
    return false;
}
int main()
{
    int m,n;
    cin>>n>>m;
    cout<<isMultiple(m,n)<<endl;
    return 0;
}