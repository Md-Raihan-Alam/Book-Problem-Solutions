#include<stdio.h>
void insertionSort(int arr[],int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
        temp[i]=arr[i];
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key=temp[i];
        while(j>=0 && temp[j]>key)
        {
            temp[j+1]=temp[j];
            j--;
        }
        temp[j+1]=key;
    }
    for(int i=0;i<n;i++)
        arr[i]=temp[i];
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}