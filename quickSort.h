#ifndef SORTINGALGORITHMS_QUICKSORT_H
#define SORTINGALGORITHMS_QUICKSORT_H
#include <iostream>


int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int temp;
    int count = 0;
    for(int i = start + 1; i <= end; i++)
    {
        if(arr[i] <= pivot)
            count++;
    }
    // pivot elemana doğru pozisyonu veriyoruz
    int pivotIndex = start + count;
    // swap yapıyoruz
    std::swap(arr[pivotIndex], arr[start]);

    // pivot elemanın sol ve sağ kısımlarını sıralıyoruz
    int i = start, j = end;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        {
            //swap yapıyoruz.
            std::swap(arr[i++], arr[j--]);

        }
    }

    return pivotIndex;
}


void quickSort(int arr[], int start, int end)
{
    // Başlangıç durumu
    if(start >= end)
        return;

    // diziyi bölüyoruz.
    int p = partition(arr, start, end);
    // dizinin sol kısmını sıralıyoruz.
    quickSort(arr, start, p - 1);
    // dizinin sağ kısmını sıralıyoruz.
    quickSort(arr, p + 1, end);
}

#endif //SORTINGALGORITHMS_QUICKSORT_H
