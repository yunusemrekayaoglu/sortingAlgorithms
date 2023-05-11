#ifndef SORTINGALGORITHMS_COUNTINGSORT_H
#define SORTINGALGORITHMS_COUNTINGSORT_H
#include <iostream>
#include <string.h>



void countSort(int arr[], int n)
{
    int maxElement = *std::max_element(arr, arr + n);
    int output[n];
    int count[maxElement + 1];

    memset(count, 0, sizeof(count));

    for(int i = 0; i < n; i++)
        count[arr[i]]++;

    for(int i = 1; i <= maxElement; i++)
        count[i] += count[i - 1];

    for(int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for(int i = 0; i < n; i++)
        arr[i] = output[i];


    for(int i = 0; i < n; i++)
        std::cout << output[i] << " ";
}




#endif //SORTINGALGORITHMS_COUNTINGSORT_H
