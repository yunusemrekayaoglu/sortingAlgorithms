#ifndef SORTINGALGORITHMS_SELECTIONSORT_H
#define SORTINGALGORITHMS_SELECTIONSORT_H

/*
 * bir  veriyi  kendisinden sonraki verilerle karşılaştırıp küçük
 * olan veriyi, kendisinden önceki sıraya koyan veri algoritmasıdır.
 * Örnek; 5, 14, 13, 23, 45, 231, 18
 * 1. Adım: 5 < 14 ? True
 * 2. Adım: 5, 14, 13, 23, 45, 231, 18
 * 3. Adım: 14 < 13 ? False
 * 4. Adım: 5, 13, 14, 23, 45, 231, 18
 * ... Adım: 5, 13, 14, 18,23, 45, 231
 *
*/


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
