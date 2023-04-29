#ifndef SORTINGALGORITHMS_BUBBLESORT_H
#define SORTINGALGORITHMS_BUBBLESORT_H
#include <iostream>

/* Veri setindeki verileri ardışık ikili olarak
 * karşılaştırarak küçük veriyi karşılaştırılan verinin soluna
 * yazdıran bir algoritmadır.
 *
 * Sıralanmak istenen verimiz:
 *
 * Öğrenci numarası üzerine bir örnek yapalım:
 * 5, 7, 2, 9, 6, 1, 3
 *
 *
 * 1. Adım: (5 <? 2), 7, 6, 1, 3, 9
 *
 * 2. Adım: 2, (5 <? 7), 6, 1, 3, 9
 *
 * 3. Adım: 2, 5, (7 <? 6), 1, 3, 9
 *
 * 4. Adım: 2, 5, 6, (7 <? 1), 3, 9
 *
 * 5. Adım: 2, 5, 6, 1, (7 <? 3), 9
 *
 * 6. Adım: 2, 5, 6, 1, 7, (3 <? 9)
 *
 * ... Adım: 1, 2, 3, 5, 6, 7, 9
*/


void  bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
            if(arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
    }
}


void printBubbleSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}





#endif //SORTINGALGORITHMS_BUBBLESORT_H
