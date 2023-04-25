#include <iostream>
#include "selectionSort.h"


int main() {
    int arr[] = {12312, 3123123,123, 12,12,313,2132141431};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    std::cout << "Sorted array: \n";
    printSelectionSort(arr, n);
    return 0;
}
