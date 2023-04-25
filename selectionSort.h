#ifndef SORTINGALGORITHMS_SELECTIONSORT_H
#define SORTINGALGORITHMS_SELECTIONSORT_H

/*
 * bir  veriyi bir kendinden önceki veriyle karşılaştırıp küçük
 * olan veriyi, kendisinden önceki sıraya koyan veri algoritmasıdır.
 *
*/

#include <bits/stdc++.h>
#include <iostream>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }
        if (min != i)
            swap(&arr[min], &arr[i]);
    }
}

void printSelectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
}




#endif //SORTINGALGORITHMS_SELECTIONSORT_H
