#include <iostream>
#include "selectionSort.h"
#include "quickSort.h"
#include "mergeSort.h"

int main() {
//    int arr[] = {5, 14, 13, 23, 45, 231, 18};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    selectionSort(arr, n);
//    std::cout << "Sorted array: \n";
//    printSelectionSort(arr, n);


//    int arr[] = { 9, 3, 4, 2, 1, 8 };
//    int n = 6;
//
//    quickSort(arr, 0, n - 1);
//
//    for (int i = 0; i < n; ++i)
//    {
//        std::cout << arr[i] << " ";
//    }


    int arr[] = {12, 11, 13, 5, 6, 7};
    auto arr_size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Verilen dizi: \n";
    printMergeSortArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);
    std::cout << "\n Siralanan veri: \n";
    printMergeSortArray(arr, arr_size);
    return 0;
}
