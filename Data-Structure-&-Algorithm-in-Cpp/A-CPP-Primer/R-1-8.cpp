#include<iostream>
using namespace std;
bool isMultiple(int n,int m){
    if(n%m==0)
        return true;
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(isMultiple(n,m))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}