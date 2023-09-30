#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> matrixMultiply(const vector<vector<int>>& A,const vector<vector<int>>& B)
{
    int n=A.size();
    int m=A[0].size();
    int p=B[0].size();
    if(m!=B.size())
    {
        cout<<"Matrix dimension are not comatible for multiplication"<<endl;
        return {};
    }
    vector<vector<int>> C(n,vector<int> (p,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            for(int k=0;k<m;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    return C;
}
int main()
{
    vector<vector<int>> A={{1,2,3},{4,5,6}};
    vector<vector<int>> B={{7,8},{9,10},{11,12}};
    vector<vector<int>> result=matrixMultiply(A,B);
    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[i].size();j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}