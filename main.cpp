#include <iostream>
#include "selectionSort.h"


int main() {
    int arr[] = {5, 14, 13, 23, 45, 231, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    std::cout << "Sorted array: \n"; 
    printSelectionSort(arr, n);
    return 0;
}
