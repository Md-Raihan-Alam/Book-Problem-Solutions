#include<iostream>
using namespace std;
void pairEvenDetect(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if((i*j)%2==0)
                {
                    cout<<i<<" "<<j<<endl;
                }
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    pairEvenDetect(arr,n);
    return 0;
}