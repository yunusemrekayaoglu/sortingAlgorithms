#ifndef SORTINGALGORITHMS_SHELLSORT_H
#define SORTINGALGORITHMS_SHELLSORT_H
#include <iostream>

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
