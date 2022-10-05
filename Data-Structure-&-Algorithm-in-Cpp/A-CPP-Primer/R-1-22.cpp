#include<iostream>
using namespace std;
int cnt(double d)
{
    int cnt=0;
    while(1)
    {
        if(d<2)
            return cnt;
        d/=2;
        cnt++;
    }
}
int main()
{
    double d;
    cin>>d;
    cout<<cnt(d);
    return 0;
}