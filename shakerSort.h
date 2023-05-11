#ifndef SORTINGALGORITHMS_SHAKERSORT_H
#define SORTINGALGORITHMS_SHAKERSORT_H
#include <iostream>




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
