#ifndef SORTINGALGORITHMS_GNOMESORT_H
#define SORTINGALGORITHMS_GNOMESORT_H
#include <iostream>
#include <vector>

void gnomeSort(std::vector<int>& arr, int n)
{
    int index = 0;

    while(index < n)
    {
        if (index == 0)
            index++;
        if(arr[index] >= arr[index - 1])
            index++;
        else
        {
            std::swap(arr[index], arr[index - 1]);
            index--;
        }
    }
    return;
}

void printGnomeSort(std::vector<int>arr, int n)
{
    std::cout << "Sorted sequence after gnomeSort: ";
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";

    }
    std::cout << "\n";
}

#endif //SORTINGALGORITHMS_GNOMESORT_H
