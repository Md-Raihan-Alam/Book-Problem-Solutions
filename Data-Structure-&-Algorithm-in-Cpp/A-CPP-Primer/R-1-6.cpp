#include <iostream>

using namespace std;

int main()
{
    double *dp=new double[10];
    for(int i=0;i<10;i++)
        dp[i]=0.0;
    for(int i=0;i<10;i++)
        cout<<dp[i]<<endl;
    return 0;
}
