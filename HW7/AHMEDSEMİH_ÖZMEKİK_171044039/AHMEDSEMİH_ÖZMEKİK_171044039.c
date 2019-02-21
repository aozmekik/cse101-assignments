#include <stdio.h>
#include <stdlib.h>

int bolen_bul(int girdi);               //fonksiyonların tanımları
int arkadas_kontrol(int sayi1);


int main(){

    int sayi; //kullanıcıdan alacağımız sayinin tanımlanması.

    printf("Arkadasini bulmak istediginiz sayiyi giriniz: "); //kullanıcıya bilgi vermek.
    scanf("%d",&sayi);					      // kullanıcıdan alınan değerin sayi değişkenine atanması.
    if(arkadas_kontrol(sayi)==1){	// eğer arkadas_kontrol fonksiyonu 1 return ederse bu bloka gir.

        printf("%d sayisinin arkadas sayisi: %d",sayi,bolen_bul(sayi)); //arkadas sayisinin ekrana basilmasi.
    }
    else{

        printf("%d sayisinin arkadas sayisi bulunmamaktadir.",sayi);  // arkadas sayinin olmama durumu.
    }


    return 0;
}



int bolen_bul(int girdi){	// verilen sayinin bolenlerini bulma fonksiyonu bir tane int argüman alıyor.

   int sayi,toplam=0,i;		// kullanılacak değişkenlerin tanımlanması.

   sayi= girdi;			// argümanın değişkene atanması.


   for (i=sayi-1;1<=i && i<sayi;i--){	// i degiskeni sayimizin bir eksiği olarak döngüye başlıyor ve i 1'den küçük olana dek bu döngüye girecek.

        if(sayi%i==0){			// eğer sayinin i ile bölümünden kalanı yok ise bu durumda i sayisi sayimizin bölenlerinden bir tanesi olur.

            toplam=toplam + i;		// sayının bölenlerinin toplamını istediğimiz için bulduğumuz her böleni bu değişkenle topluyoruz.

        }

   }

   return toplam; // sonuç olarak sayının pozitif tam sayi bölenlerinin toplamını return ediyoruz.

}


int arkadas_kontrol(int sayi1){		// arkadas sayi kontrolü fonksiyonu sayi1 argümanı alıyor ve bu sayının herhangi bir arkadaş sayisi olup olmadığını kontrol edecek.

    int sayi2=bolen_bul(sayi1);		// bolen_bul fonksiyonu verdiğimiz sayinin bolenlerinin toplamını sayi2 değişkenine atadık.
    if(bolen_bul(sayi2)==sayi1){	//arkadaş sayının tanımında da dediği gibi sayi2'nin de bolenleri toplamı sayi1 eşit ise 1 return edecek.

        return 1;

    }

return 0;				//koşulu sağlayamaz ise 0 return edecek.
}



