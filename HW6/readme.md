
**Teslim Şekli:** 1 - 5. sorular pdf olarak ve 6. soru C kodu olarak hazırlanacaktır. Bu iki dosya sıkıştırılarak Moodle’a
yüklenecektir. Bütün belgelerin isimlendirilmesi öğrenci numarasına göredir. (Örnek: 171044001.zip içinde
171044001.c ve 171044001.pdf)
**SORULAR**

1. Derleyici (compiler) ile çevirici (assembler) arasındaki fark nedir?
2. Aşağıdaki soruları cevaplayınız.
    a) Fonksiyonel (functional), emirsel (imperative) ve bildirimsel (declarative) programlama dillerini kısaca
       açıklayınız.
    b) C, SQL, C#, F#, Haskell, Prolog, Common Lisp, Java dilleri yukarıda geçen dillerden hangisine girer?
    c) Common Lisp ve SQL dillerinin tarihçeleri, avantajları, dezavantajları ve nerelerde kullanıldıkları hakkında
       kısaca bilgi veriniz.
3. Verilen değerler için işlemlerin sonucu nedir?
    a) 4 * 6 + 24
    b) 27 / (6 – 3 * 1)
    c) 4 * 6 / 2 + 17 % 2
    d) 6 > 2 + 3 * 2 && 0
4. Aşağıdaki emirsel dil kodunu fonksiyonları verilen fonksiyonel dil koduna dönüştürünüz. Fonksiyonel dile ait
    fonksiyonların hepsini kullanmak zorunda değilsiniz. Dilerseniz bir fonksiyonu birden çok defa kullanabilirsiniz.

```
Emirsel Dil Kodu: Fonksiyonel Dil Fonksiyonları:
```
```
vize_toplam = vizelerin toplaması
vize_ortalamasi = vize_toplam / 2
vize_agirlikli notu = vize_ortalamasi * 0.
final_agirlikli_notu = final_notu * 0.
ders_notu = vize_agirlikli_notu + final_agirlikli_notu
```
```
( liste_topla girdi_listesi)
( topla sayi1 sayi2)
( cikar sayi1 sayi2)
( carp sayi1 sayi2)
( bol bolunen bolen) (Not: Kalan önemsizdir.)
```
5. Aşağıdaki fonksiyonel dil kodunu emirsel dil koduna dönüştürünüz. Burada faturaların elektrik, doğalgaz, su,
    telefon ve internet olduğunu kabul ediniz. Cevabınızı buna göre yazınız.

Fonksiyonel Dil Kodu: ( **cikar** ( **topla** eski_bakiye maas) ( **liste_topla** faturalar))

6. Hız sabitleyici işini yapan bir C kodu yazınız. Bu kod içerisinde kullanıcıdan güncel hız ve hedef hız alınıp
    ekrana bastırılacaktır (Kısım1). Eğer güncel hız hedef hızdan düşükse güncel hız tek tek arttırılarak hedef
    hıza çıkarılacaktır. Bu esnada güncel hız satır satır ekrana basılacaktır (Kısım2). Eğer güncel hız hedef
    hızdan büyükse ekrana “Hiziniz hedef hizdan yuksektir.” mesajı yazılacaktır (Kısım3).
     Kodunuzun en başına yorum özelliğini kullanarak adınızı soyadınızı ve numaranızı yazınız.
     Kodunuza yorum yazarak ne yaptığınızı anlatmanız zorunludur.
     Kodunuzu yazarken girintilere (indentation) dikkat ediniz. Kodunuzun sade ve güzel görünmesi bir bakışta
       anlaşılması açısından önemlidir.
     Değişken isimleri gelişi güzel verilmemeli yapılan işe uygun olarak verilmelidir. Örneğin; kullanıcıdan
       alınacak güncel hız için portakal isimli bir değişken tanımlarsanız notunuz kırılır.
     Göndereceğiniz program tam olarak istenen işi tam yapmasa bile yaptığınız kısım(lar) çalışır durumda
       olmalıdır.


