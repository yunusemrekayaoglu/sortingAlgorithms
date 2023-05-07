#ifndef SORTINGALGORITHMS_INSERTIONSORT_H
#define SORTINGALGORITHMS_INSERTIONSORT_H
#include <iostream>
#include <vector>
/* insertionSorting - Sokma Algoritması
 * Bu algoritma; sıralanacak olan dizinin 0. indeksinden başlayıp n. indeksine kadar
 * ilerleyerek ve karşılaştırma yaparak sıralayan algoritmadır.
 * Örnek veri setimiz: 33, 44, 21, 83, 56, 73, 22
 * 1. Adım: 33 | 44, 21, 83, 56, 73, 22
 * 2. Adım: 33, 44 | 21, 83, 56, 73, 22 --> 33 <? 44, evet bundan dolayı işlem yapılmadan ilerlenir.
 * 3. Adım: 33, 44, 21 | 83, 56, 73, 22 --> 44 <? 21, hayır bundan dolayı yer değişilir.
 *          33, 21, 44 | 83, 56, 73, 22 --> 33 <? 21, hayır bundan dolayı yer değiştirilir.
 *          21, 33, 44 | 83, 56, 73, 22 --> 21 <? 33, evet veri sıralandı. İşlemler devam eder.
 * 4. Adım: 21, 33, 44, 83 | 56, 73, 22 --> 44 <? 83, evet. Veri sıralı, işlem devam eder.
 * 5. Adım: 21, 33, 44, 83, 56 | 73, 22 --> 83 <? 56, hayır bundan dolayı yer değiştirilir.
 *          21, 33, 44, 56, 83 | 73, 22 --> 44 <? 56, evet. Veri sıralandı. işlem devam eder.
 * 6. Adım: 21, 33, 44, 56, 83, 73 | 22 --> 83 <? 73, hayır bundan dolayı yer değiştirilir.
 *          21, 33, 44, 56, 73, 83 | 22 --> 56 <? 73, evet. Veri Sıralı, işlem devam eder.
 * 7. Adım: 21, 33, 44, 56, 73, 83, 22  --> 83 <? 22, hayır yer değiştirilir.
 *          21, 33, 44, 56, 73, 22, 83  --> 73 <? 22, hayır yer değiştirilir.
 *          21, 33, 44, 56, 22, 73, 83  --> 56 <? 22, hayır yer değiştirilir.
 *          21, 33, 44, 22, 56, 73, 83  --> 44 <? 22, hayır yer değiştirilir.
 *          21, 33, 22, 44, 56, 73, 83  --> 33 <? 22, hayır yer değiştirilir.
 *          21, 22, 33, 44, 56, 73, 83  --> 21 <? 22, evet. Veri sıralandı, işlem devam eder.
 */


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
