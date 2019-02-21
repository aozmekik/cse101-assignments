#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* Fonksiyonlarda birden fazla değer döndürebilmek için struct tanımları.
									*/

/* eaton_cho struct yapısının içinde ayşe ve mehmetin yediği çikolataların değerleri tutulacak.
return_cho yapısında da mehmet ve aysenin ayrı ayrı çikolata yeme fonksiyonlarındaki index değeri 
ve çikolata yenildi mi yenilmedi değeri tutulacak (yani 0 ya da 1).
											*/ 

struct eaten_cho{ 
    int eaten_cho_mehmet;  
    int eaten_cho_ayse;	   
};

struct return_cho{
    int cho;
    int index;

};

/*Fonksiyonların prototipleri*/

int cho_print(int cho_list[]);	//listenin ekrana basılma fonksiyonu.
int cho_create(int cho_list[]); // çikolataların rastgele tanınlanması fonksiyonu.

int cho_winner(struct eaten_cho main_result); //kazananın ekran basılma fonksiyonu.

/*Ayse ve Mehmet'in çikotaları yeme fonksiyonları*/

struct return_cho mehmet_eat_cho(int cho_list[],int  head_index,int tail_index);
struct return_cho ayse_eat_cho(int cho_list[],int head_index,int tail_index);



int main(){

    srand(time(NULL));

    int cho_list[6];
    struct eaten_cho main_result;
    struct return_cho mehmet_return,ayse_return; // çikolata yemek fonksiyonlarından alınacak değerlerin tutulması için.
    int head_index=0,tail_index=5; //mehmet ve ayşenin çikolata yemeğe başlayacağı yerler.

    main_result.eaten_cho_ayse=0;    /* ilk değerler tanımlanması*/ 
    main_result.eaten_cho_mehmet=0;

    cho_create(cho_list);	
    cho_print(cho_list);
    printf("\n");


	/* toplam yenen çikolata sayısı 6 olana kadar devam edicek olan döngüde kimin kaç tane çikolata yediği tutulmakda. */

	
    while(main_result.eaten_cho_ayse+main_result.eaten_cho_mehmet!=6){

        ayse_return = ayse_eat_cho(cho_list,head_index,tail_index); //ayşenin bir kere yeme işlemi.


/*indexler eşitlendiğinde aysenin index değerinin return edilmesini sağlıyoruz ki 
mehmetin fonksiyonun bundan haberdar olsun ve ayşe çoktan bir çikolatayı yerken
bir karışıklık olmasın diye.Şart sağlanmadığında ise mehmet'in yeme fonksiyonu bundan habersiz olur ortada kalan son çikolatanın
mehmet tarafından yenmesi de sağlanmış olur.*/

        if(tail_index==head_index){			

            tail_index=ayse_return.index;

        }

        mehmet_return = mehmet_eat_cho(cho_list,head_index,tail_index); // mehmet 2 kat hızlı olduğu için mehmetin yeme fonksiyonu her seferde 2 defa çağrılıyor.
        head_index=mehmet_return.index;
        main_result.eaten_cho_mehmet+=mehmet_return.cho;
        mehmet_return =mehmet_eat_cho(cho_list,head_index,tail_index);

        main_result.eaten_cho_mehmet+=mehmet_return.cho; //yeme fonksiyonlarından alınan 1 ya da 0 değerlerinin toplam yenen çikolata değişkenlerinde tutulması.
        main_result.eaten_cho_ayse+=ayse_return.cho;

        head_index=mehmet_return.index; // indexlerin güncellenmesi.
        tail_index=ayse_return.index;


    }

    printf("Mehmet: %d\nAyse: %d\n",main_result.eaten_cho_mehmet,main_result.eaten_cho_ayse); //kaçar çikolata yenildiğinin basılması.

    cho_winner(main_result); // ve kazananın ekrana basılması.



    return 0;


}

int cho_create(int cho_list[]){

    for(int i=0;i<6;i++){

        cho_list[i]=rand()%11+1; // çikolata listesine random olarak değer atıyoruz.Ve 0 boyutlu çikolata olamayacağından 11 ile kalanını bulup 1 topluyoruz.
    }

    return 0;


}


int cho_print(int cho_list[]){

    for(int i =0;i<6;i++){

        printf("%d ",cho_list[i]); // for döngüsü içinde yan yana çikolata listenin basılması.

    }

    return 0;

}

struct return_cho mehmet_eat_cho(int cho_list[],int head_index,int tail_index){

    struct return_cho result;


    if(head_index==tail_index){ // eğer indexler eşit indexi 1 azaltıp 0 return ediyoruz.

        result.cho=0;
        head_index--;
        result.index=head_index;

        return result;

    }

    if(cho_list[head_index]==0){ // eğer o indexdeki değer 0 ise bir sonraki indexe geçme işlemi.

        if(head_index+1==tail_index){ // bir sonraki indexteki çikolata çoktan yenmeye başlanmış ise 0 return ediyor.


            result.index=head_index;
            result.cho=0;

            return result;

        }

        head_index++; //indesi arttırıp 1 azaltma işlemi.

        cho_list[head_index]--;

        result.index=head_index;
        result.cho=1;

        return result;



    }

    cho_list[head_index]--; // eğer 0 değilse normal olarak çikolata azalmaya devam ediyor.

    if(cho_list[head_index]==0){ // bu noktadan sonra sıfırlanmış ise 1 arttırıp bu değerler return ediliyor.

        head_index++;
        result.index=head_index;
        result.cho=1;

        return result;


    }



    result.index=head_index; // bu noktadan sonra sıfırlanmamış ise 0 return ediliyor.Yani henüz çikolata bitmedi.
    result.cho=0;

    return result;



}

/*Mehmet için olan fonksiyonun aynısı geçerli ama sadece head_index 'i return etmek yerine 
ayşe sağdan sola doğru yediği için tail_index 'i return edicek*/


struct return_cho ayse_eat_cho(int cho_list[],int head_index,int tail_index){

    struct return_cho result;

    if(head_index==tail_index){

        tail_index++;
        result.index=tail_index;
        result.cho=0;

        return result;
    }

    if(cho_list[tail_index]==0){

        if(tail_index - 1 == head_index){

            result.index=tail_index;
            result.cho=0;


            return result;

        }

        tail_index--;
        cho_list[tail_index]--;

        result.index=tail_index;
        result.cho=1;


        return result;

    }

    cho_list[tail_index]--;

    if(cho_list[tail_index]==0){

        tail_index--;
        result.index=tail_index;
        result.cho=1;

        return result;


    }



    result.index=tail_index;
    result.cho=0;

    return result;
}


/*Kazanan belirlenmesi için değerlerin karşılaştırılması*/


int cho_winner(struct eaten_cho main_result){

    if(main_result.eaten_cho_mehmet==main_result.eaten_cho_ayse){

        printf("Tie!");

    }

    if(main_result.eaten_cho_mehmet>main_result.eaten_cho_ayse){

        printf("Winner is Mehmet!");

    }

    else{

        printf("Winner is Ayse!");

    }

    return 0;

}

