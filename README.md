# algoritmaanalizivetasarimiodev2
ALFA-BETA BUDAMA ALGORİTMASI



Algoritmanın Amacı
Bu program, alfa-beta budama algoritmasını kullanarak, bir ağaç yapısındaki en iyi değeri bulmayı amaçlamaktadır. 
Algoritma, bir oyun ağacında (veya herhangi bir ağaç yapısında) gezinerek, her bir düğümün değerini hesaplar ve ardından bir en iyi hamle seçer. 
Alfa-beta budama algoritması, minimax algoritmasına göre daha verimli bir şekilde çalışır ve ağacın daha az dallarını inceler. 
Bu nedenle, bu algoritma özellikle derinlikleri büyük olan ağaç yapısı problemlerinde kullanışlıdır.



Algoritma Ne İçin Kullanılır veya Kullanılabilir
Alfa-beta budama algoritması, genellikle oyun ağaçlarında kullanılan bir arama algoritmasıdır. Özellikle yapay zeka uygulamalarında, 
bilgisayarın en iyi hamleyi bulması için kullanılır. Ancak aynı zamanda, algoritmanın kullanılabileceği diğer alanlar da vardır, örneğin:
•	Yapay zeka: Alfa-beta budama, yapay zeka alanında, özellikle oyunlarda kullanılır. Örneğin satranç, go, tavla, dama gibi oyunlarda, 
bilgisayarın en iyi hamleyi bulmak için kullanılabilir.
•	Optimizasyon problemleri: Alfa-beta budama, optimizasyon problemlerinde de kullanılabilir. Örneğin, bir üretim sürecindeki en uygun üretim 
miktarını veya en düşük maliyetli çözümü bulmak için kullanılabilir.
•	Planlama: Alfa-beta budama, planlama problemlerinde de kullanılabilir. Örneğin, bir robotun verilen bir görevi yerine 
getirmek için en iyi yolu bulmak için kullanılabilir.
Alfa-beta budama, ayrıca, ağaç yapısı problemleri için de kullanışlıdır. Örneğin, bir ağaç yapısındaki en kısa yol veya 
en kısa sürede hedefe ulaşmak gibi problemleri çözmek için de kullanılabilir.



Algoritmanın Çalışma Şekli
Alfa-beta budama algoritması, ağaç yapısını kullanarak en iyi hamleyi veya sonucu bulmak için tasarlanmış bir arama algoritmasıdır. 
Algoritma, min-max algoritması temelinde çalışır ve ağaç yapısındaki her bir düğüm için min-max değerlerini hesaplar. Daha sonra, algoritma, bu değerleri kullanarak ağaç yapısındaki en iyi hamleyi veya sonucu belirler.
Algoritmanın çalışma şekli şöyledir:
1.	Başlangıç düğümü (kök düğümü) seçilir ve bu düğümdeki oyuncunun maksimize edeceği veya minimize edeceği değer belirlenir.
2.	Algoritma, seçilen oyuncunun hamlelerini sırayla deneyerek ağaç yapısındaki bir sonraki düğüme geçer.
3.	Ağaç yapısındaki her bir düğüm için, min-max değeri hesaplanır. Maksimum oyuncu için, en iyi hamleyi belirleyen maksimum değer seçilir ve minimum oyuncu 
için, en iyi hamleyi belirleyen minimum değer seçilir.
4.	Algoritma, seçilen oyuncunun hamlelerini denemeye devam eder ve ağaç yapısındaki son düğüme ulaşana kadar tekrar eder.
5.	Son düğüme ulaşıldığında, algoritma, min-max değerlerini kullanarak kök düğümündeki en iyi hamleyi veya sonucu belirler.
6.	Algoritma, en iyi hamleyi veya sonucu verir.
Alfa-beta budama algoritması, min-max algoritmasından farklı olarak, ağaç yapısındaki dalları daha verimli bir şekilde keşfeder. 
Bu sayede, daha kısa sürede en iyi sonuç veya hamle bulunabilir.



Algoritmanın Çalışma Zamanı Analizi
Bu programda kullanılan algoritma, Alfa-Beta budama algoritmasıdır. Bu algoritma, Min-Max algoritmasının geliştirilmiş bir versiyonudur ve 
arama ağacındaki dalların gereksiz şekilde incelenmesini engeller. Algoritma, birçok yapay zeka uygulamasında kullanılır.
Bu programda, Alfa-Beta budama algoritması bir tam kararlığa sahip olduğundan, her durumda en iyi, en kötü ve ortalama durumlar için sınırlar 
belirtilmesi mümkün değildir. Ancak, genel olarak en iyi, en kötü ve ortalama durumlar aşağıdaki şekilde açıklanabilir:
•	En iyi durum: Algoritmanın çalışma süresi, ağacın yapısı ve aranılan değerlerin yerleşimi nedeniyle, algoritma birkaç adımda aranan en iyi değeri bulabilir. 
Bu durumda, algoritmanın çalışma süresi, ağaç derinliğiyle doğru orantılıdır ve O(log n) olarak ifade edilebilir.
•	En kötü durum: Algoritmanın çalışma süresi, ağacın yapısı ve aranılan değerlerin yerleşimi nedeniyle, algoritmanın tüm dallarını araması gerektiği durumlarda 
en kötü durum ortaya çıkar. Bu durumda, algoritmanın çalışma süresi O(2^n) olarak ifade edilebilir.
•	Ortalama durum: Algoritmanın çalışma süresi, ağacın yapısı ve aranılan değerlerin yerleşimi nedeniyle, en iyi ve en kötü durum arasında bir durumda olabilir. 
Algoritmanın çalışma süresi, ağaç derinliği ve ağacın dallarının seçilmesi ile doğru orantılıdır. Bu durumda, algoritmanın çalışma süresi O(b^(d/2)) olarak ifade 
edilebilir, burada b dal sayısı, d derinlik ve /2 ise ağaçta dalların yarısını ziyaret etmesi nedeniyle.


