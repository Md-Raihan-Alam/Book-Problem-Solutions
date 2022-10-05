#include<iostream>
#include<string>
using namespace std;
int main()
{
    char ch[6]={'a','b','c','d','e','f'};
    for(int i=0;i<6;i++)
    {
        string s;
        for(int j=i;j<6;j++)
        {
            s.push_back(ch[j]);
        }
        cout<<s<<endl;
    }
    return 0;
}