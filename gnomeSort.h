#ifndef SORTINGALGORITHMS_GNOMESORT_H
#define SORTINGALGORITHMS_GNOMESORT_H
#include <iostream>
#include <vector>
/* Gnome Sort
 * - Yanyana duran ve sıralamayı bozan ikili bulana kadar
 * devam edilir.
 * - İkili bulununca düzeltilir ve istenen kritere uyana kadar
 * (gerektiği durumda dizinin başına kadar) geri dönülür.
 * - Ardından uygulanan işlem kaldığı yerden devam eder.
 *
 * Örnek dizi: 2, 6, 8, 1, 3, 7, 4, 9, 0, 5
 * 1. Adım:
 *  (2), (6), 8, 1, 3, 7, 4, 9, 0, 5
 *   2, 6 kriterimizi sağlıyor.
 * 2. Adım:
 *  2, (6), (8), 1, 3, 7, 4, 9, 0, 5
 *  6, 8 kriterimizi sağlıyor.
 * 3. Adım:
 *  2, 6, (8), (1), 3, 7, 4, 9, 0, 5
 *  8, 1 kriteri sağlamıyor. İkili yer değiştirir ve küçük olan
 *  dizinin solunda kalan elemanlarla karşılaştırılarak doğru sıraya koyulur.
 * 4. Adım:
 *  2, (6), (1), {8}, 3, 7, 4, 9, 0, 5
 * 5. Adım:
 *  (2), (1), 6, {8}, 3, 7, 4, 9, 0, 5
 * 6. Adım:
 *  1, 2, 6, {8}, 3, 7, 9, 0, 5
 * 7. Adım: Gerekli sıralama sağlandığı için kaldığımız yerden devam edip sıralamaya devam ediyoruz.
 *  1, 2, 6, (8), (3), 7, 9, 0, 5
 *  Aynı işlemler bir daha uygulanır.
 *  n. Adım:
 *  0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 */
void gnomeSort(std::vector<int>& arr, int n)
{
    int index = 0;

    while(index < n)
    {
        if (index == 0)
            index++;
        if(arr[index] >= arr[index - 1])
            index++;
        else
        {
            std::swap(arr[index], arr[index - 1]);
            index--;
        }
    }
    return;
}

void printGnomeSort(std::vector<int>arr, int n)
{
    std::cout << "Sorted sequence after gnomeSort: ";
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";

    }
    std::cout << "\n";
}

#endif //SORTINGALGORITHMS_GNOMESORT_H
