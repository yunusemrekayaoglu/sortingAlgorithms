#ifndef SORTINGALGORITHMS_INSERTIONSORT_H
#define SORTINGALGORITHMS_INSERTIONSORT_H
#include <iostream>
#include <vector>



void insertionSort(std::vector<int>& arr, int n)
{
    // main case, eğer dizi sadece bir elemandan oluşuyorsa
    // onun zaten sıralandığı anlamına gelir.
    if(n <= 1)
        return;

    // dizinin n - 1 elemanını baştan başlayarak sırala.
    insertionSort(arr, n - 1);

    // n. elemanı solda kalan elemanlarla karşılaştırarak doğru
    // yere yerleştir.
    int last = arr[n - 1];
    int j = n - 2;


    //n. elemana yer açmak için diziyi sağa kaydır
    while(j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    //n. elementi doğru yere yerleştir.
    arr[j + 1] = last;
}

void printInsertionSort(std::vector<int>& arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

#endif //SORTINGALGORITHMS_INSERTIONSORT_H
