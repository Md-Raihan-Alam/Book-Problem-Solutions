#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void shuffleArray(int arr[],int n)
{
    // for(int i=0;i<n;i++)
    //     cout<<arr[i]<<" ";
    srand(time(0));
    for(int i=0;i<n;i++)
    {
        int ran=0+(rand()%52);
        int temp=arr[ran];
        int ran2=0+(rand()%52);
        arr[ran]=arr[ran2];
        arr[ran2]=temp;
    }
}
int main()
{
    int arr[52]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52};
    shuffleArray(arr,52);
    for(auto x:arr)
        cout<<x<<" ";
    return 0;
}