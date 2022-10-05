#include<iostream>
#include<cmath>
using namespace std;
bool isTwoPower(int n)
{
    double res=log2(n);
    if(res-(int)res==0.0)
        return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    cout<<isTwoPower(n);
    return 0;
}