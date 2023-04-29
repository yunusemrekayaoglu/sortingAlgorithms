#ifndef SORTINGALGORITHMS_COUNTINGSORT_H
#define SORTINGALGORITHMS_COUNTINGSORT_H
#include <iostream>
#include <string.h>
/*
 * Sayarak Sıralama (counting sort)
 * Bu sıralama algoritması veri(ler)in hafızada tutulması için geliştirilen sıralama
 * algoritmalarından bir tanesidir.
 * Çalışma mantığı: Sıralanacak olan dizideki her sayının kaç tane olduğunu farklı bir
 * dizide sayar. Sonrasında bu sayıların bulunduğu dizinin üzerinde bir işlemle sıralanmış
 * olan diziyi elde eder.
 *
 * Sıralamak istediğimiz veri: 5, 7, 2, 9, 6, 1, 3, 7
 *
 * Dizi indisi:    0 1 2 3 4 5 6 7 8 9
 * Değeri (count): 0 1 1 1 0 1 1 2 0 1
 *
 * Eğer bu koda optimizasyon işlemleri yapılmazsa büyük verisetlerinde çok fazla boş
 * değer döndüreceğinden hem zamanı hem de belleği gereksiz yere kullanacaktır.
 */


void countSort(int arr[], int n)
{
    int maxElement = *std::max_element(arr, arr + n);
    int output[n];
    int count[maxElement + 1];

    memset(count, 0, sizeof(count));

    for(int i = 0; i < n; i++)
        count[arr[i]]++;

    for(int i = 1; i <= maxElement; i++)
        count[i] += count[i - 1];

    for(int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for(int i = 0; i < n; i++)
        arr[i] = output[i];


    for(int i = 0; i < n; i++)
        std::cout << output[i] << " ";
}




#endif //SORTINGALGORITHMS_COUNTINGSORT_H
