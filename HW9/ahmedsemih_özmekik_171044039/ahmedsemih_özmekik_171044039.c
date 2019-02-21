#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL)); //random atamalar için.

    int v1_array[20],v2_array[20],v3_array[20]; // dizilerin tanımlanması.
    int v1_l0_norm=0,v2_l0_norm=0,dot_product=0,temp=0; //L0 normu ve skaler çarpımı degerlerlerinin saklanacağı değişkenler.(temp değişkeni norm hesaplaması için)
    double v1_norm,v2_norm,cos_similarity; 

    for(int i=0;i<20;i++){	// her iki döngünün de elemanlarının rastgele tanımlanacağı for döngüsü.

        v1_array[i]=rand()%11;
        v2_array[i]=rand()%11;
    }
 	
    printf("Vectors: \nV1 : "); 

    for(int i=0;i<20;i++){ // birinci dizimizin içinde bir takım işlemler yapacağımız for döngüsü. 

        printf("%d",v1_array[i]); // ekrana dizinin elemanlarının çıktısı.

        if(v1_array[i]!=0){ // L0 normu için "0" degeri taşımayan elemanların v1_l0_norm değişkeninde sayılması.
            v1_l0_norm++;
        }

        if(i!=19){	// ve ekrana basılma işleminde son elemandan sonra virgül basılmaması için bir koşul.
            printf(",");
        }

        temp+=v1_array[i]*v1_array[i]; // temp değişkeninde tüm elemenların karelerinin toplamını saklıyoruz.
    }

    v1_norm=sqrt((double)temp); // ve temp'i double'a çevirip karekökünü alıyoruz.Bu işlemde dizinin normunu bulmamızı sağlıyor.
    temp=0; // İkinci dizideki aynı işlemler için temp'i sıfırladık.

    printf("\nV2 : ");

    for(int i=0;i<20;i++){	// ikinci dizinin içinde bir takim işlemler yapacağımız for döngüsü.Ve yukardaki yorumların hepsi burada geçerlidir.(aynı işlemler)

        printf("%d",v2_array[i]); 

        if(v2_array[i]!=0){ 	
            v2_l0_norm++;
        }

        if(i!=19){
            printf(",");
        }

        temp+=v2_array[i]*v2_array[i];
    }

    v2_norm=sqrt((double)temp);


    printf("\n\nL0 Norms: \nV1 L0 norm : %d\nV2 L0 norm : %d",v1_l0_norm,v2_l0_norm); // dizilerinin L0 norm değerlerinin ekrana basılması.

    for(int i=0;i<20;i++){	// dizilerin yani vektörlerin toplamının bulunacağı ve skaler çarpımlarının bulunacağı döngü.

        v3_array[i]=v1_array[i]+v2_array[i]; // her iki dizinin aynı indekslerindeki elemanların 3. bir dizide aynı indeksde saklanması ve tüm elemanlar için tekrarlanması işlemi.
        dot_product+=v1_array[i]*v2_array[i]; // aynı indeksdeki elemanların çarpılıp hepsinin toplanması.(skaler çarpım formülü)

    }

    printf("\n\nV1 + V2 = ");

    for(int i=0;i<20;i++){ //3.dizi yani diğer iki dizinin toplam vektörünün ekrana basılması işlemi.

        printf("%d",v3_array[i]);

        if(i!=19){	//son elemandan sonra virgül basilmamasi için.
            printf(",");
        }

    }


    cos_similarity=dot_product/v1_norm*v2_norm; //cosinüs benzerliği teriminin formülü.

    printf("\n\nsim(V1,V2):%lf\n",cos_similarity); // ve bu terimin ekrana basılması.


    return 0;
}

