#include<iostream>
using namespace std;
int minSum(int arr[],int sz,int n)
{
    int sum=0;
    for(int i=0;i<sz;i++)
        if(arr[i]<n)
            sum+=arr[i];
    return sum;
}
int main()
{
    int sz;
    cin>>sz;
    int arr[sz];
    for(int i=0;i<sz;i++)
        cin>>arr[i];
    int n;
    cin>>n;
    cout<<minSum(arr,sz,n);
    return 0;
}