#ifndef SORTINGALGORITHMS_QUICKSORT_H
#define SORTINGALGORITHMS_QUICKSORT_H
#include <iostream>

/*
 * divide and conquer -> parçala fethet
 * pivot eleman seçilecek ve buna göre pivot elemandan küçük olanlar
 * pivot elemanın soluna, pivot elemandan büyük olanlar ise pivot
 * elemanın sağına gönderilecek.
 *
 * Örnek; 14, 16, 11, 18, 15, 10, 13, 16
 * 1. Adım: dizinin ortasındaki sayı bulunur.
 *          14, 16, 11, (18), 15, 10, 13, 16 -> n = 8 olduğundan 4. eleman
 *          buna pivot eleman diyelim.
 * 2. Adım: pivot elemanındaki sayıya göre dizideki diğer elemanları,
 *          pivot elemandan küçük veya büyük diye sınıflandırıyoruz.
 *          küçük olanları soluna yazıyoruz.
 *          14, 16, 11, 15, 10, 13, 16, (18)
 * 3. Adım: Sınıflandırılana kadar küçük ve büyük dizileri tekrar
 *          hızlı şekilde sıralıyoruz.
 *          14, 16, 11, 15, 10, 13, 16
 * 4. Adım: Eleman sayımız 7 ve pivot eleman n/2'den 15 olur. Diziyi
 *          15'dan küçük ve büyük diye sıralıyoruz.
 *          14, 11, 10, 13, (15), 16, 16
 * 5. Adım: 14, 11, 10, 13 sayılarını aynı şekilde sıralıyoruz.
 *          10, (11), 13, 14
 *              6. Adım: 10 ve 13, 14 i ayrı ayrı sıralıyoruz.
 * 7. Adım: Bu adımları birleştiriyoruz ve
 *          10, 11, 13, 14 elde ediliyor.
 * 8. Adım: 4. adımdaki sayıları birleştiriyoruz ve
 *          10, 11, 13, 14, (15), 16, 16 elde ediliyor.
 * 9. Adım: 2. adımdaki sayıları birleştiriyoruz ve son olarak
 *          10, 11, 13, 14, 15, 16, 16, (18) elde ediliyor.
 * quickSort algoritması basit haliyle bu şekilde çalışmaktadır.
*/
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int temp;
    int count = 0;
    for(int i = start + 1; i <= end; i++)
    {
        if(arr[i] <= pivot)
            count++;
    }
    // pivot elemana doğru pozisyonu veriyoruz
    int pivotIndex = start + count;
    // swap yapıyoruz
    std::swap(arr[pivotIndex], arr[start]);

    // pivot elemanın sol ve sağ kısımlarını sıralıyoruz
    int i = start, j = end;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        {
            //swap yapıyoruz.
            std::swap(arr[i++], arr[j--]);

        }
    }

    return pivotIndex;
}


void quickSort(int arr[], int start, int end)
{
    // Başlangıç durumu
    if(start >= end)
        return;

    // diziyi bölüyoruz.
    int p = partition(arr, start, end);
    // dizinin sol kısmını sıralıyoruz.
    quickSort(arr, start, p - 1);
    // dizinin sağ kısmını sıralıyoruz.
    quickSort(arr, p + 1, end);
}

#endif //SORTINGALGORITHMS_QUICKSORT_H
