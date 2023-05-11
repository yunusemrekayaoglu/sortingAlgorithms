# Sıralama (sorting) Algoritmaları

## Neden Sıralama Algoritmaları?
- Sıralama algoritmaları, verileri belirli bir kritere göre düzenleyen yöntemlerdir.
-  Sıralama algoritmalarının önemi, verilerin aranmasını, işlenmesini ve sunulmasını kolaylaştırmasıdır. 
- Sıralama algoritmaları farklı performans, bellek kullanımı ve kararlılık özelliklerine sahiptir. Bu nedenle, veri setinin boyutu, yapısı ve istenen sonuçlara göre uygun bir sıralama algoritması seçmek önemlidir.

## İçindeki Sıralama Algoritmaları:
### Bubble Sort
- Veri setindeki verileri ardışık ikili olarak karşılaştırarak küçük veriyi karşılaştırılan verinin soluna yazdıran bir algoritmadır.
 * Öğrenci numarası üzerine bir örnek yapalım: 5, 7, 2, 9, 6, 1, 3

1. Adım: (5 <? 2), 7, 6, 1, 3, 9
2. Adım: 2, (5 <? 7), 6, 1, 3, 9
3. Adım: 2, 5, (7 <? 6), 1, 3, 9
4. Adım: 2, 5, 6, (7 <? 1), 3, 9
5. Adım: 2, 5, 6, 1, (7 <? 3), 9
6. Adım: 2, 5, 6, 1, 7, (3 <? 9)
.. Adım: 1, 2, 3, 5, 6, 7, 9
### Counting Sort
- Bu sıralama algoritması veri(ler)in hafızada tutulması için geliştirilen sıralama algoritmalarından bir tanesidir.
- Çalışma mantığı: Sıralanacak olan dizideki her sayının kaç tane olduğunu farklı bir dizide sayar. Sonrasında bu sayıların bulunduğu dizinin üzerinde bir işlemle sıralanmış olan diziyi elde eder.


0 1 2 3 4 5 6 7 8 9 -> Dizi indisi

0 1 1 1 0 1 1 2 0 1 -> Değeri(count)  

- Eğer bu koda optimizasyon işlemleri yapılmazsa büyük veri setlerinde çok fazla boş değer döndüreceğinden hem zamanı hem de belleği gereksiz yere kullanacaktır.


### Gnome Sort
- Yanyana duran ve sıralamayı bozan ikili bulana kadar devam edilir.
- İkili bulununca düzeltilir ve istenen kritere uyana kadar (gerektiği durumda dizinin başına kadar) geri dönülür.
- Ardından uygulanan işlem kaldığı yerden devam eder.

- Örnek dizi: 2, 6, 8, 1, 3, 7, 4, 9, 0, 5
1. Adım: (2) <? (6), 8, 1, 3, 7, 4, 9, 0, 5 -> 2, 6 kriterimizi sağlıyor.

2. Adım: 2, (6) <?(8), 1, 3, 7, 4, 9, 0, 5 -> 6, 8 kriterimizi sağlıyor.

3. Adım: 2, 6, (8) <? (1), 3, 7, 4, 9, 0, 5 -> 8, 1 kriteri sağlamıyor. 
İkili yer değiştirir ve küçük olan dizinin solunda kalan elemanlarla karşılaştırılarak doğru sıraya koyulur.

4. Adım: 2, (6) <? (1), {8}, 3, 7, 4, 9, 0, 5 -> 6, 1 kriteri sağlamıyor. İkili yer değiştirir.

5. Adım: (2) <? (1), 6, {8}, 3, 7, 4, 9, 0, 5 -> 2, 1 kriteri sağlamıyor. İkili yer değiştirir.

6. Adım: 1, 2, 6, {8}, 3, 7, 9, 0, 5 -> Gerekli Sıralama sağlandığı için kalınan yerden devam edip sıralama işlemine aynen devam ediyoruz.
7. Adım:  1, 2, 6, (8) <? (3), 7, 9, 0, 5 -> 8, 3 kriteri sağlamıyor. İkili yer değiştirir.

- Aynı adımlar dizi sıralanana kadar devam eder.

n. Adım: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9





### Heap Sort
İşlem Basamağı:  
a. Kökteki elemanı sil

b. En sağdaki elemanı köke taşı

c. Tekrar et heap'i düzeltilir

d. Sondaki eleman ile kökteki elemanın yerini değiştir.

- Max Heap:
 
                         20
                        /  \
                       12  18
                      / \   /
                     5  3  4
Bu ağacın en büyük değeri en üstte durmakta. Bu değer alınarak sonuç dizisinin son elemanı yapılırsa ve sonra geriye kalan sayılar tekrar yığınlanırsa ve bu işlem eleman kalmayana kadar tekrarlanırsa sonuç dizisindeki veriler sıralanmış olarak elde edilir.

1. Sonuç dizisi: (20)

                        18
                       /  \
                      12  4
                     / \
                    5  3
2. Sonuç dizisi: (20, 18)

                        12
                       /  \
                      5    4
                     /
                    3
3. Sonuç dizisi: (20, 18, 12)

                        5
                       /  \
                      3    4

4. Sonuç dizisi: (20, 18, 12, 5)

                        4
                       /
                       3

5. Sonuç dizisi: (20, 18, 12, 5, 4, 3)




### Insertion Sort
- Bu algoritma; sıralanacak olan dizinin 0. indeksinden başlayıp n. indeksine kadar tek tek ilerleyerek ve karşılaştırma yaparak sıralayan algoritmadır.
 * Örnek veri setimiz: 33, 44, 21, 83, 56, 73, 22

 1. Adım: 33 | 44, 21, 83, 56, 73, 22

 2. Adım: 33, 44 | 21, 83, 56, 73, 22 --> 33 <? 44, evet bundan dolayı işlem yapılmadan ilerlenir.

 3. Adım: 
 33, 44, 21 | 83, 56, 73, 22 --> 44 <? 21, hayır bundan dolayı yer değişilir.  

 33, 21, 44 | 83, 56, 73, 22 --> 33 <? 21, hayır bundan dolayı yer değiştirilir. 

 21, 33, 44 | 83, 56, 73, 22 --> 21 <? 33, evet veri sıralandı. İşlemler devam eder.

4. Adım: 21, 33, 44, 83 | 56, 73, 22 --> 44 <? 83, evet. Veri sıralı, işlem devam eder.

5. Adım:

 21, 33, 44, 83, 56 | 73, 22 --> 83 <? 56, hayır bundan dolayı yer değiştirilir.

 21, 33, 44, 56, 83 | 73, 22 --> 44 <? 56, evet. Veri sıralandı. işlem devam eder.

 6. Adım:
  21, 33, 44, 56, 83, 73 | 22 --> 83 <? 73, hayır bundan dolayı yer değiştirilir.

  21, 33, 44, 56, 73, 83 | 22 --> 56 <? 73, evet. Veri Sıralı, işlem devam eder.

7. Adım:
 21, 33, 44, 56, 73, 83, 22  --> 83 <? 22, hayır yer değiştirilir.

 21, 33, 44, 56, 73, 22, 83  --> 73 <? 22, hayır yer değiştirilir.

 21, 33, 44, 56, 22, 73, 83  --> 56 <? 22, hayır yer değiştirilir.

 21, 33, 44, 22, 56, 73, 83  --> 44 <? 22, hayır yer değiştirilir.

 21, 33, 22, 44, 56, 73, 83  --> 33 <? 22, hayır yer değiştirilir.

21, 22, 33, 44, 56, 73, 83  --> 21 <? 22, evet. Veri sıralandı.

* Son durumda veri seti: 21, 22, 33, 44, 56, 73, 83


### Merge Sort
- Elimizdeki dizinin ortasından bölerek en küçük parçaya ulaşma işlemiyle başlar.
- 8 elemanlı bir dizi düşünürsek, ilk aşamada 4 - 4, sonraki aşamada 2 - 2 - 2 - 2 şeklinde bölünecektir. 
- Diziyi bölme işlemi tamamlandıktan sonra her bir alt dizi bir üstteki diziye geçirilir.
- Üsteki diziye geçmek için kendi içerisinde büyük küçük sıralaması yapar. Küçük olan değer dizinin soluna, büyük olan değer sağına geçer. Bu işlem elimizde başlangıçta olan diziye geçene kadar devam eder. Bu aşamada artık elimizde küçükten büyüğe sıralanmış bir dizi vardır diyebiliriz.

- Örnek dizi: 15, 23, 54, 55, 65, 45, 88, 41

1. Adım: Diziyi ikiye böl.
15, 23, 54, 55 / 65, 45, 88, 41

2. Adım: Eldeki dizileri ikiye böl.
15, 23 / 54, 55 / 65, 45 / 88, 41

3. Adım: Eldeki yeni diziler 2 veya daha küçük eleman sayısına ulaşıldığı için dur.

4. Adım: Her diziyi kendi içinde küçükten büyüğe sırala.
15, 23 / 54, 55 / 45, 65 / 41, 88

5. Adım: Her bölünmüş diziyi birleştir. Birleştirirken eldeki parçaların değerlerine dikkat ederek birleştir.
15, 23, 54, 55 / 41, 45, 65, 88

6. Adım: Tek bir bütün parça olana kadar devam et.
15, 23, 41, 45, 54, 55, 65, 88

7. Adım: Elimizdeki dizi sıralandığı için durulur.
15, 23, 41, 45, 54, 55, 65, 88



### Quick Sort
- Pivot eleman seçilecek ve buna göre pivot elemandan küçük olanlar pivot elemanın soluna, pivot elemandan büyük olanlar ise pivot elemanın sağına gönderilecek.
* Örnek dizi: 14, 16, 11, 18, 15, 10, 13, 16

1. Adım: Dizinin ortasındaki sayı bulunur.
14, 16, 11, (18), 15, 10, 13, 16 -> n = 8 olduğundan 4. eleman. Buna pivot eleman diyelim.

2. Adım: Pivot elemanındaki sayıya göre dizideki diğer elemanları, pivot elemandan küçük veya büyük diye sınıflandırıyoruz. Küçük olanları soluna yazıyoruz.
14, 16, 11, 15, 10, 13, 16, (18)

3. Adım: Sınıflandırılana kadar küçük ve büyük dizileri tekrar hızlı şekilde sıralıyoruz.
14, 16, 11, 15, 10, 13, 16

4. Adım: Eleman sayımız 7 ve pivot eleman n/2'den 15 olur. Diziyi 15'dan küçük ve büyük diye sıralıyoruz.
14, 11, 10, 13, (15), 16, 16

5. Adım: 14, 11, 10, 13 sayılarını aynı şekilde sıralıyoruz.
10, (11), 13, 14

6. Adım: 10 ve 13, 14 i ayrı ayrı sıralıyoruz.

7. Adım: Bu adımları birleştiriyoruz ve 10, 11, 13, 14 elde ediliyor.

8. Adım: 4. adımdaki sayıları birleştiriyoruz ve 10, 11, 13, 14, (15), 16, 16 elde ediliyor.

9. Adım: 2. adımdaki sayıları birleştiriyoruz ve son olarak 10, 11, 13, 14, 15, 16, 16, (18) elde ediliyor.



### Selection Sort
- Bir veriyi kendisinden sonraki verilerle karşılaştırıp küçük olan veriyi, kendisinden önceki sıraya koyan veri algoritmasıdır.
 * Örnek dizi: 5, 14, 13, 23, 45, 231, 18

 1. Adım: 5 <? 14  -> evet, yer değiştirilmez.
 5, 14, 13, 23, 45, 231, 18
 
 2. Adım: 14 <? 13 -> hayır, yer değiştirilir.
 5, 13, 14, 23, 45, 231, 18

 ... Adım: 5, 13, 14, 18, 23, 45, 231



### Shaker Sort
- Bu algoritma yapısal olarak bubbleSort yani baloncuk sıralamasıyla benzer çalışmaktadır. Kabarcık sıralaması, tek yönlü olarak elemanı hareket ettirirken sallayıcı sıralamasında bir sağdan bir soldan iki yönden de sıralamaktadır.
 * Örnek dizimiz: 5 1 4 2 8 0 2

AŞAMA 1: Bu aşamada bubble sort'taki gibi soldan sağa sıralama yaparak ilerliyoruz.
1. Adım: (5), (1), 4, 2, 8, 0, 2 -> 5 <? 1, hayır, yer değişir.

         (1), (5), 4, 2, 8, 0, 2

 2. Adım: 1, (5), (4), 2, 8, 0, 2 -> 5 <? 4, hayır, yer değişir.

          1, (4), (5), 2, 8, 0, 2

  3. Adım: 1, 4, (5), (2), 8, 0, 2 -> 5 <? 2, hayır, yer değişir.

          1, 4, (2), (5), 8, 0, 2

 
 4. Adım: 1, 4, 2, (5), (8), 0, 2 -> 5 <? 8, evet, sıralamaya büyük olan değerden devam et.


 5. Adım: 1, 4, 2, 5, (8), (0), 2 -> 8 <? 0, hayır, yer değişir.

           1, 4, 2, 5, (0), (8), 2


 6. Adım: 1, 4, 2, 5, 0, (8), (2) -> 8 <? 2, hayır, yer değişir.
 
 * DURUM:   1, 4, 2, 5, 0, 2, 8

 AŞAMA 2: Bu aşamada sırayı dizinin sonundan başına doğru ilerleyerek sıralıyoruz.


 1. Adım: 1, 4, 2, 5, (0), (2), 8 -> 2 >? 0, evet, sıralamaya küçük olan değerden devam et.


 2. Adım: 1, 4, 2, (5), (0), 2, 8 -> 0 >? 5, hayır, yer değişir.

          1, 4, 2, (0), (5), 2, 8
 3. Adım: 1, 4, (2), (0), 5, 2, 8 -> 0 >? 2, hayır, yer değişir.

          1, 4, (0), (2), 5, 2, 8
 4. Adım: 1, (4), (0), 2, 5, 2, 8 -> 0 >? 4, hayır, yer değişir.

          1, (0), (4), 2, 5, 2, 8

 5. Adım: (1), (0), 4, 2, 5, 2, 8 -> 0 >? 1, hayır, yer değişir.

   DURUM: (0), (1), 4, 2, 5, 2, 8


 AŞAMA N: Bu aşamada DURUM'daki dizi üzerinde sırasıyla 1. ve 2. aşama tekrar edilir.
 Ta ki dizimiz küçükten büyüğe sıralanana kadar.
 Devam ettiğimiz durumda dizimizin;
 * DURUM: 0, 1, 2, 2, 4, 5, 8







### Shell Sort
- Bu algoritmada;
 * Sıralama işlemi için öncelikle bir atlama miktarı belirlenir. Atlama miktarı belirlenmesi için en basit yöntem dizideki sayıların yarısından başlamaktır.
  * Örnek dizi: 5, 7, 2, 9, 6, 1, 3

 1. Adım: Bu dizide 7 sayı olduğu için atlama miktarı 3 ile başlanır.

                  5, 7, 2
                  9, 6, 1
                  3

2. Adım: Her sütunu kendi içinde küçükten büyüğe sırala.

                  3, 6, 1
                  5, 7, 2
                  9
 * Oluşan yeni dizi: 3, 6, 1, 5, 7, 2, 9
3. Adım: Oluşan yeni diziyi 3 / 2 = 1 şeklinde sıraladığımızda oluşan yeni hali:

                  1,
                  2,
                  3,
                  5,
                  6,
                  7,
                  9
* olacaktır ve oluşan yeni dizi: 1, 2, 3, 5, 6, 7, 9 şeklinde sıralanacaktır.




## KAYNAKLAR:
#### https://bilgisayarkavramlari.com/
#### https://www.geeksforgeeks.org/