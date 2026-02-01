#include <iostream>
#include <algorithm> //for swap
using namespace std;

void bubbleSort(int arr[], int n)
{ // Compare adjacent values and bubble the larger elements to the end

    // SPACE COMPLEXITY: O(1) — in-place sorting
    // TIME COMPLEXITY:
    //    Worst Case: O(n^2) — array is in reverse order
    //    Best Case: O(n) if you use a swapped flag to exit early when the array is already sorted

    for (int i = 0; i < n - 1; i++) // need n-1 passes
    {
        for (int j = 0; j < n - i - 1; j++) // reduce comparisons as last i elements are already sorted
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[5] = {9, 5, 6, 1, 2};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}