#include<iostream>
#include<algorithm>
using namespace std;


void recursiveBubbleSort(int arr[],int n,int i,int j)
{
    if(i==n-2)
    {
        return;
    }
    if(j==n-i-1)
    {
        recursiveBubbleSort(arr, n, i + 1, 0);
        return;
    }
    if(arr[j]>arr[j+1])
    {
        swap(arr[j],arr[j+1]);
    }
    recursiveBubbleSort(arr,n,i,j+1);
}

int main()
{
    int arr[5] = {9, 5, 6, 1, 2};
    recursiveBubbleSort(arr, 5,0,0);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}