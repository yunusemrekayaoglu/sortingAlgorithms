#include <iostream>
#include <vector>
#include "selectionSort.h"
#include "quickSort.h"
#include "mergeSort.h"
#include "heapSortv1.h"
#include "heapSortv2.h"
#include "countingSort.h"
#include "bubbleSort.h"
#include "gnomeSort.h"
#include "insertionSort.h"
#include "shakerSort.h"
#include "shellSort.h"

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


//    int arr[] = {12, 11, 13, 5, 6, 7};
//    auto arr_size = sizeof(arr) / sizeof(arr[0]);
//
//    std::cout << "Verilen dizi: \n";
//    printMergeSortArray(arr, arr_size);
//
//    mergeSort(arr, 0, arr_size - 1);
//    std::cout << "\n Siralanan veri: \n";
//    printMergeSortArray(arr, arr_size);


//    int arr[] = {60, 20, 40, 70, 30, 10};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    for(int i = n / 2 - 1; i >= 0; i--)
//        heapify(arr, n, i);
//    std::cout << "After heapifying array is \n";
//        printHeapSort(arr, n);
//
//        heapSort(arr, n);
//
//        std::cout << "Sorted array is \n";
//        printHeapSort(arr, n);


//    int arr[] = {60, 40, 30, 20, 80, 40, 15, 100};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    heapSortv2(arr, n);
//
//    std::cout << "Sorted array is \n";
//    for(int i = 0; i < n; i++)
//        std::cout << arr[i] << " ";
//    std::cout << std::endl;


//    int arr[] = {1, 3, 6, 51, 123, 456734, 4, 5, 6, 1, 5, 8, 9};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    countSort(arr, n);

//    int arr[] = {1, 32, 4, 123, 451, 123, 444, 11234, 123412, 5455};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    bubbleSort(arr, n);
//    printBubbleSort(arr, n);

//    int arr[] = {2, 6, 8, 1, 3, 7, 4, 9, 0, 5};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    gnomeSort(arr, n);
//    printGnomeSort(arr, n);

//    std::vector<int> arr = {12, 11, 13, 5, 6};
//    int n = arr.size();
//    insertionSort(arr, n);
//    printInsertionSort(arr, n);

//    int a[] = {5, 1, 4, 2, 8, 0, 2};
//    int n = sizeof(a) / sizeof(a[0]);
//    shakerSort(a, n);
//    printShakerSort(a, n);

    int arr[] = {5, 7, 2, 9, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before sorting: \n";
    printShellSort(arr, n);

    std::cout << "\nAfter sorting: \n";
    shellSort(arr, n);
    printShellSort(arr, n);




    return 0;
}
