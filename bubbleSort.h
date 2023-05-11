#ifndef SORTINGALGORITHMS_BUBBLESORT_H
#define SORTINGALGORITHMS_BUBBLESORT_H
#include <iostream>




void  bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
            if(arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
    }
}


void printBubbleSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}





#endif //SORTINGALGORITHMS_BUBBLESORT_H
