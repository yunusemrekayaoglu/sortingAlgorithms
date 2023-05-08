#ifndef SORTINGALGORITHMS_SHAKERSORT_H
#define SORTINGALGORITHMS_SHAKERSORT_H
#include <iostream>

/* shakerSort (cocktail Sort) - Sallayıcı Sıralama
 * Bu algoritma yapısal olarak bubbleSort yani baloncuk sıralamasıyla benzer
 * çalışmaktadır. Kabarcık sıralaması, tek yönlü olarak elemanı hareket ettirirken
 * sallayıcı sıralamasında bir sağdan bir soldan iki yönden de sıralamaktadır.
 *
 *
 * Örnek dizimiz: 5 1 4 2 8 0 2
 *
 * AŞAMA 1: Bu aşamada bubble sort'taki gibi soldan sağa sıralama yaparak ilerliyoruz.
 *
 * 1. Adım: (5), (1), 4, 2, 8, 0, 2 -> 5 <? 1, hayır, yer değişir.
 *          (1), (5), 4, 2, 8, 0, 2
 * 2. Adım: 1, (5), (4), 2, 8, 0, 2 -> 5 <? 4, hayır, yer değişir.
 *          1, (4), (5), 2, 8, 0, 2
 * 3. Adım: 1, 4, (5), (2), 8, 0, 2 -> 5 <? 2, hayır, yer değişir.
 *          1, 4, (2), (5), 8, 0, 2
 * 4. Adım: 1, 4, 2, (5), (8), 0, 2 -> 5 <? 8, evet, sıralamaya büyük olan değerden devam et.
 * 5. Adım: 1, 4, 2, 5, (8), (0), 2 -> 8 <? 0, hayır, yer değişir.
 *          1, 4, 2, 5, (0), (8), 2
 * 6. Adım: 1, 4, 2, 5, 0, (8), (2) -> 8 <? 2, hayır, yer değişir.
 * DURUM:   1, 4, 2, 5, 0, 2, 8
 *
 * AŞAMA 2: Bu aşamada sırayı dizinin sonundan başına doğru ilerleyerek sıralıyoruz
 *
 * 1. Adım: 1, 4, 2, 5, (0), (2), 8 -> 2 >? 0, evet, sıralamaya küçük olan değerden devam et.
 * 2. Adım: 1, 4, 2, (5), (0), 2, 8 -> 0 >? 5, hayır, yer değişir.
 *          1, 4, 2, (0), (5), 2, 8
 * 3. Adım: 1, 4, (2), (0), 5, 2, 8 -> 0 >? 2, hayır, yer değişir.
 *          1, 4, (0), (2), 5, 2, 8
 * 4. Adım: 1, (4), (0), 2, 5, 2, 8 -> 0 >? 4, hayır, yer değişir.
 *          1, (0), (4), 2, 5, 2, 8
 * 5. Adım: (1), (0), 4, 2, 5, 2, 8 -> 0 >? 1, hayır, yer değişir.
 *   DURUM: (0), (1), 4, 2, 5, 2, 8
 *
 * AŞAMA N: Bu aşamada DURUM'daki dizi üzerinde sırasıyla 1. ve 2. aşama tekrar edilir.
 * Ta ki dizimiz küçükten büyüğe sıralanana kadar.
 * Devam ettiğimiz durumda dizimizin;
 * DURUM: 0, 1, 2, 2, 4, 5, 8
 */


void shakerSort(int a[], int n)
{
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while(swapped)
    {
        //Döngüye girerken swapped'ı sıfırladık. Çünkü önceden bir döngüde olabilir.
        swapped = false;


        //bubbleSort'taki gibi soldan sağa sıralayacaktır.
        for(int i = start; i < end; i++)
        {
            if(a[i] > a[i + 1])
            {
                std::swap(a[i], a[i + 1]);
                swapped = true;
            }
        }


        //Eğer hareket etmezse dizi sıralanmış demektir.
        if(!swapped)
            break;

        //Bir sonraki aşamada swapped kullanılması için sıfırladık.
        swapped = false;

        //Dizinin en büyük elemanı en sonda olduğu için dizinin sonunu bir azaltarak
        //Sonraki en büyük değeri bulmaya çalışacağız. Bundan dolayı end'i azaltıyoruz.
        end--;

        //bubbleSort'un tersi şekilde sağdan sola sıralayarak ilerleme adımıdır.
        for(int i = end - 1; i >= start; i--)
        {
            if(a[i] > a[i + 1])
            {
                std::swap(a[i], a[i + 1]);
                swapped = true;
            }
        }

        // Başlangıç noktasını artırdık. Çünkü son aşama, bir sonraki en küçük sayıyı
        // doğru yere taşımış olacaktır.
        start++;

    }
}

//Diziyi ekrana yazdır.

void printShakerSort(int a[], int n)
{
    for(int i = 0; i < n; i++)
        std::cout << a[i] << " ";
    std::cout << "\n";
}





#endif //SORTINGALGORITHMS_SHAKERSORT_H
