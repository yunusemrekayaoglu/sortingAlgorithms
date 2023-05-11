#ifndef SORTINGALGORITHMS_SELECTIONSORT_H
#define SORTINGALGORITHMS_SELECTIONSORT_H



#include <iostream>


void selectionSort(int arr[], int n)
{
    int temp;
    int min;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
