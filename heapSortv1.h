#ifndef SORTINGALGORITHMS_HEAPSORTV1_H
#define SORTINGALGORITHMS_HEAPSORTV1_H
#include <iostream>




// n boyutlu bir heap dizsiinde, i indisine sahip bir düğümün
// alt ağacını yığmak  için

void heapify(int arr[], int n, int i)
{
    int largest = i; // 0 tabanlı indeksleme kullandığımız için en büyüğü kök yap
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Eğer 'left' kökten büyükse
    if(left < n && arr[left] > arr[largest])
        largest = left;

    // Eğer 'right' kökten büyükse
    if(right < n && arr[right] > arr[largest])
        largest = right;

    // En büyüğü kök değilse
    if(largest != i)
    {
        std::swap(arr[i], arr[largest]);

        // Etkilenen alt-ağacı özyinelemeli olarak düzenle.
        heapify(arr, n, largest);
    }
}

// Yığınlama Sıralaması yapmak için ana fonksiyon
void heapSort(int arr[], int n)
{
    // Yığını oluştur (yığını yeniden düzenle)
    for(int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Tek tek bir eleman çıkar ve heap yapısını koru
    for(int i = n - 1; i >= 0; i--)
    {
        // Şu anki kökü sona çağır
        std::swap(arr[0], arr[i]);
        // Azaltılmış yığın üzerinde max yığını çağır
        heapify(arr, i, 0);
    }
}

void printHeapSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}





#endif //SORTINGALGORITHMS_HEAPSORTV1_H
