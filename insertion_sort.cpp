#include <iostream>
#include <vector>
using namespace std;


void insertionSort(vector<int>& arr) 
{
    int comparisons = 0;  // счётчик сравнений
    for (size_t i = 1; i < arr.size(); ++i) 
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            comparisons++;
            arr[j + 1] = arr[j];
            j--;
        }
        if (j >= 0) comparisons++;  // последнее сравнение, когда цикл прерывается
        arr[j + 1] = key;
    }
    return comparisons;
}
