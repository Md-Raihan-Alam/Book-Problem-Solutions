#include<iostream>
#include<vector>
using namespace std;
#define int long long
#define endl "\n"
void merge(vector<int> &arr,int left,int middle,int right)
{
    int n1=middle-left+1;
    int n2=right-middle;
    vector<int> leftArray(n1);
    vector<int> rightArray(n2);
    for(int i=0;i<n1;i++)
        leftArray[i]=arr[left+i];
    for(int j=0;j<n2;j++)
        rightArray[j]=arr[middle+1+j];
    int i=0,j=0,k=left;
    while(i<n1 && j<n2)
    {
        if(leftArray[i]<=rightArray[j])
        {
            arr[k]=leftArray[i];
            i++;
        }else{
            arr[k]=rightArray[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=leftArray[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=rightArray[j];
        j++;
        k++;
    }
}
void mergeSort(vector<int> &arr,int left,int right)
{
    if(left<right)
    {
        int middle=left+(right-left)/2;
        mergeSort(arr,left,middle);
        mergeSort(arr,middle+1,right);
        merge(arr,left,middle,right);
    }
}
signed main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v)
        cin>>x;
    mergeSort(v,0,n-1);
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
}