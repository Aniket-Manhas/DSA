#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

void display(vector<int>& vec)
{
    for(int i:vec)
    {
        cout<<i<<" ";
    }
}
// pick the min place in start (it's correct position)
// SPACE COMPLEXITY: O(1) — in-place sorting
    // TIME COMPLEXITY:
    //    Worst Case: O(n^2) — array is in reverse order
void selectionSort(vector<int>& vec)
{
    int n=vec.size();
    for(int i=0;i<n-1;i++)
    {
        int indexOfMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(vec[j]<vec[indexOfMin])
            {
                indexOfMin=j;
            }
        }
        if (indexOfMin != i)        
            swap(vec[i], vec[indexOfMin]);
    }
}

int main()
{
    vector<int> vec= {9, 5, 6, 1, 2};
    selectionSort(vec);
    display(vec);
    return 0;
}