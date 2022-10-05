#include<iostream>
using namespace std;
int sumAll(int n)
{
    n--;
    return n*(n+1)/2;
}
int main()
{
    int n;
    cin>>n;
    cout<<sumAll(n);
    return 0;
}