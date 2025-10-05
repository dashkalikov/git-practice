#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr)
{
    for (size_t i = 0; i < arr.size() - 1; ++i)
    {
        size_t minIndex = i;
        for (size_t j = i + 1; j < arr.size(); ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
        }
    }
}