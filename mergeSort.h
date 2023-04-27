#ifndef SORTINGALGORITHMS_MERGESORT_H
#define SORTINGALGORITHMS_MERGESORT_H
#include <iostream>

/*
 *              Birleştirme Sıralaması (Merge Sort)
 * Elimizdeki dizinin ortasından bölerek en küçük parçaya ulaşma işlemiyle başlar.
 *  8 elemanlı bir dizi düşünürsek, ilk aşamada 4 - 4, sonraki aşamada 2 - 2 - 2 - 2
 *  şeklinde bölünecektir.
 * Diziyi bölme işlemi tamamlandıktan sonra her bir diziyi bir üstteki diziye geçilir.
 * Üsteki diziye geçmek için kendi içerisinde büyük küçük sıralaması yapar. Küçük olan değer
 * dizinin soluna, büyük olan değer sağına geçer. Bu işlem elimizde başlangıçta olan diziye geçene
 * kadar devam eder. Bu aşamada artık elimizde küçükten büyüğe sıralanmış bir dizi vardır diyebiliriz.
 *
 * Örnek;
 *      Dizimiz: 15, 23, 54, 55, 65, 45, 88, 41
 *      1. Adım: Diziyi ikiye böl.
 *          15, 23, 54, 55 / 65, 45, 88, 41
 *      2. Adım: Eldeki dizileri ikiye böl.
 *          15, 23 / 54, 55 / 65, 45 / 88, 41
 *      3. Adım: Eldeki yeni diziler 2 veya daha küçük eleman sayısına ulaşıldığı için dur.
 *      4. Adım: Her diziyi kendi içinde küçükten büyüğe sırala.
 *          15, 23 / 54, 55 / 45, 65 / 41, 88
 *      5. Adım: Her bölünmüş diziyi birleştir. Birleştirirken eldeki parçaların değerlerine
 *              dikkat ederek birleştir.
 *          15, 23, 54, 55 / 41, 45, 65, 88
 *      6. Adım: Tek bir bütün parça olana kadar devam et.
 *          15, 23, 41, 45, 54, 55, 65, 88
 *      7. Adım: Elimizdeki dizi sıralandığı için durulur.
 *          15, 23, 41, 45, 54, 55, 65, 88
*/

    // İki alt diziyi bir ana dizide birleştiriyoruz
    // İlk alt dizi arr[begin..mid]
    // İkinci alt dizi arr[mid + 1..end]

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
    int indexOfMergedArray = left; // birleştirilen dizinin ilk elemanı

    while(indexOfSubArrOne < subArrOne && indexOfSubArrTwo < subArrTwo)
    {
        if(leftArr[indexOfSubArrOne] <= rightArr[indexOfSubArrTwo])
        {
            arr[indexOfMergedArray] = leftArr[indexOfSubArrOne];
            indexOfSubArrOne ++;
        }
        else
        {
            arr[indexOfMergedArray] = rightArr[indexOfSubArrTwo];
            indexOfSubArrTwo++;
        }
        indexOfMergedArray++;
    }

//    while(indexOfSubArrOne < subArrOne)
//    {
//        arr[indexOfMergedArray] =
//    }

}


#endif //SORTINGALGORITHMS_MERGESORT_H
