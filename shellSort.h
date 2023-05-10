#ifndef SORTINGALGORITHMS_SHELLSORT_H
#define SORTINGALGORITHMS_SHELLSORT_H
#include <iostream>
/* shellSort
 * Bu algoritmada;
 * Sıralama işlemi için öncelikle bir atlama miktarı belirlenir. Atlama miktarı belirlenmesi için
 * en basit yöntem dizideki sayıların yarısından başlamaktır.
 * Örnek dizi: 5, 7, 2, 9, 6, 1, 3
 * Bu dizide 7 sayı olduğu için atlama miktarı 3 ile başlanır.
 *                  5, 7, 2
 *                  9, 6, 1
 *                  3
 *              Her sütunu kendi içinde küçükten büyüğe sırala.
 *                  3, 6, 1
 *                  5, 7, 2
 *                  9
 *              Oluşan yeni dizi: 3, 6, 1, 5, 7, 2, 9
 *              Oluşan yeni diziyi 3 / 2 = 1 şeklinde sıraladığımızda oluşan yeni hali:
 *                  1,
 *                  2,
 *                  3,
 *                  5,
 *                  6,
 *                  7,
 *                  9
 *              olacaktır ve oluşan yeni dizi: 1, 2, 3, 5, 6, 7, 9 şeklinde sıralanacaktır.
 *
 */

int shellSort(int arr[], int n)
{
    // Büyük genişlikle başlanır ve yarıya indirilerek ilerlenir.
    for(int genislik = n / 2; genislik > 0; genislik /= 2)
    {
        // Bu oluşan yeni genişlik için sıralama yapılır.
        // Genişliğin ilk elemanı sıralı geldiği için bir eleman sonrasına geçilir ve genişlik
        // o elemandan sıralanmaya başlar
        for(int i = genislik; i < n ; i += 1)
        {
            // bu aşamada arr[i]. elemanı temp değişkeni içinde tutuyoruz.
            int temp = arr[i];

            // Doğru olana kadar önceki genişliğe göre sıralanmış öğelerin satırlarını değiştir.
            int j;
            for(j = i; j >= genislik && arr[j - genislik] > temp; j -= genislik)
                arr[j] = arr[j - genislik];

            // temp'tekini doğru konuma yerleştir.
            arr[j] = temp;
        }
    }
    return 0;
}
void printShellSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
}




#endif //SORTINGALGORITHMS_SHELLSORT_H
