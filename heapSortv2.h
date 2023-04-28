#ifndef SORTINGALGORITHMS_HEAPSORTV2_H
#define SORTINGALGORITHMS_HEAPSORTV2_H
#include <algorithm>
#include <iostream>
#include <vector>


void heapSortv2(int arr[], int n)
{
    // Diziyi vektöre çevir
    std::vector<int> v(arr, arr + n);

    // Vektörü maksimum yığına çevir
    std::make_heap(v.begin(), v.end());

    // Maksimum yığını sırala
    std::sort_heap(v.begin(), v.end());

    // Sıralanan vektörü tekrar diziye kopyala
    std::copy(v.begin(), v.end(), arr);
}


#endif //SORTINGALGORITHMS_HEAPSORTV2_H
