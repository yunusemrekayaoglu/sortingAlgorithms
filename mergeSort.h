#ifndef SORTINGALGORITHMS_MERGESORT_H
#define SORTINGALGORITHMS_MERGESORT_H
#include <iostream>


void merge(int arr[], int const left, int const mid, int const right)
{
    auto const subArrOne = mid - left + 1;
    auto const subArrTwo = right - mid;

    // Geçici diziler oluşturma
    auto *leftArr = new int[subArrOne];
    auto *rightArr = new int[subArrTwo];

    // Sol ve sağ alt dizileri, geçici diziye kopyalıyoruz.
    for(auto i = 0; i < subArrOne; i++)
        leftArr[i] = arr[left + i];
    for(auto j = 0; j < subArrTwo; j++)
        rightArr[j] = arr[mid + 1 + j];

    auto indexOfSubArrOne = 0; // ilk alt dizinin ilk elemanı
    auto indexOfSubArrTwo = 0; // ikinci alt dizinin ilk elemanı
    int indexOfMergedArr = left; // birleştirilen dizinin ilk elemanı

    while(indexOfSubArrOne < subArrOne && indexOfSubArrTwo < subArrTwo)
    {
        if(leftArr[indexOfSubArrOne] <= rightArr[indexOfSubArrTwo])
        {
            arr[indexOfMergedArr] = leftArr[indexOfSubArrOne];
            indexOfSubArrOne ++;
        }
        else
        {
            arr[indexOfMergedArr] = rightArr[indexOfSubArrTwo];
            indexOfSubArrTwo++;
        }
        indexOfMergedArr++;
    }


    // Kalan elemanları kopyala
    // eğer left[], alt dizisinde kalan varsa
    while(indexOfSubArrOne < subArrOne)
    {
        arr[indexOfMergedArr] = leftArr[indexOfSubArrOne];
        indexOfSubArrOne++;
        indexOfMergedArr++;
    }


    // Kalan elemanları kopyala
    // eğer right[], alt dizisinde kalan varsa
    while(indexOfSubArrTwo < subArrTwo)
    {
        arr[indexOfMergedArr] = rightArr[indexOfSubArrTwo];
        indexOfSubArrTwo++;
        indexOfMergedArr++;
    }
    delete[] leftArr;
    delete[] rightArr;
}



//alt dizin için;
// 'begin' soldaki eleman ve 'end' ise sağdaki eleman
// aralarında küçükten büyüğe sırala

void mergeSort(int arr[], int const begin, int const end)
{
    if(begin >= end)
        return;  // tekrarlı olarak döndür.


    auto mid = begin + (end - begin) / 2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, begin, mid, end);
}


//Diziyi ekrana yazdırmak için kullanılan fonksiyon
void printMergeSortArray(int arr[], int n)
{
    for(auto i = 0; i < n; i++)
        std::cout << arr[i] << " ";
}


#endif //SORTINGALGORITHMS_MERGESORT_H
