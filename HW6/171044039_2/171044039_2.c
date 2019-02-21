#include <stdio.h>

int main(){

    int menu_input; //Kullanıcıdan alacağımız secenegin girdisini tuttuğumuz değişkeni tanımladım.

    menu_input=1; //Menu döngüsüne ilk kez girebilmek için bu değişkene 1 değerini verdim.



    while(menu_input!=0){       //Menu döngüsü menu_input değişkeni 0 olmadığı sürece devam edecek.


        printf("---Menu---\n1.Yıldızlardan elmas ciz.\n2.Ogrenci bilgisini goster.\n0.Cikis.\n");//Menu'nun gösterimi.

        printf("Seceneginiz: \n");  //Kullanıcıdan seçeneğinin istedim.

        scanf("%d",&menu_input);    //Seçeneği menu_input değişkenine atadım.

        printf("Seceneginiz: %d\n",menu_input); //Ve kullanıcıya hangi seçeneği yaptığını bildirdim.

        if(menu_input==1){  //menu_input değişkenin 1 var ise yani kullanıcı 1.seçeneği seçmiş ise bu block'u yapacak.


            int height,space,row,temp; /*Elmas basma işleminde kullanıcağımız değişkenleri tanımladım.(height=tüm elmasın yüksekliği,space=boşlukların sayısı,
                                row=satir sayisi,temp ise gecici olarak kullanıcağımız degisken.)*/

            int i,j,a; //Döngülerin işleyişinde kullanıcağımızın değişkenlerin tanımlanması.

            printf("Height: \n"); //Kullanıcıdan Elmasın yüksekliğini istedim.
            scanf("%d",&height);  //Ve bu istemi height adlı değişkene atadım.

            row=(height+1)/2; //satirların ve yüksekliğin arasındaki baginti.

            space=height-row; //boşlukların, yüksekliğin ve satirların arasindaki baginti.

            temp=row-space;  //temp degiskeni ise aslinda ilgili satirda kac defa yildiz basilmasi gerektigini söylüyor.

            //ORTA KISIM'A KADAR OLAN PİRAMİT İÇİN DÖNGÜ

            for (j=1;j<=row;j++){ /*Ortadaki yildiz sayisi tüm elmasın yüksekliğine eşittir.Örn:1,3,5,3,1 elmas şeklinde basilan bu yildizlarda ortadaki yildiz
                            sayisi 5 olup height ise yine 5'tir.Bu kısımda orta dahil olup ortaya kadar elmasın yarısı yani piramit basilmak amaçlanmıştır.Döngü
                            ortaya kadar olan satir sayisi kadar dönecektir.*/

                for(i=0;i<space;i++){ //Yıldızların basilmasindan önce boslukların basilmasi icin gereken döngü boslu sayisi kadar dönecektir.

                    printf(" "); //Boslukların basilmasi.

                }space--; //Ve bu döngünün sonunda bi sonraki satir icin boslukların 1 azaltilma işlemi.

                for(a=0;a<temp;a++){ //Boşluklardan sonra yildizlarin basilmasi için gerekli olan döngü temp sayisi kadar dönecek.

                    printf("*");// Yildizların basilmasi.

                }temp=temp+2; // Bi sonraki satir için yildiz basma döngüsünün 2 tane daha yildiz basmasi için temp'in arttirilmasi.

                printf("\n"); // tek satirdaki boşluklar ve yildizların işi bittikten sonra bi sonraki satir'a geçmek için.


            }


            //Üstteki döngü yıldızların sayisini arttırıp basarak ilerlemek içindi.Şimdi ise Alt kısmı için değişken tanımlıyoruz.

            temp=temp-4; /*temp degiskeni en son tam ortadaki yildiz sayisinin 2 fazlasi kadardir cünkü üstteki döngüye bakarsak
                    en son ortadaki yildiz sayisi kadar yildiz basilip temp 2 arttırılmıştır.Bu yüzden ortadaki satirdan
                    sonrasi için temp'i 4 azaltip asagidaki döngüye sokacagiz.*/

            space=1; // tam ortada hiç boşluk yoktu.Tam ortanın bi altında olduğumuz için 1 boşluk var.Bu yüzden space'ye 1 atıyoruz.

            //ORTA KISIM'DAN SONRAKİ TERS PİRAMİT İÇİN DÖNGÜ



            for(j=1;j<row;j++){/*Bu sefer row kadar değil row'un bir eksiği kadar dönecek döngümüz.Çünkü bu kısma elmasın ortası
                        dahil değildir.*/


                for(i=0;i<space;i++){ //Boşluk döngüsü.

                    printf(" "); //Boşluk basilmasi.

                }space++; //Ve bu sefer üsttekini aksine boşlukları arttırıyoruz çünkü yildizlari azaltıyoruz.Tam tersi yani.

                for(a=0;a<temp;a++){ //Yildizlarin döngüsü temp kadar dönecek.

                    printf("*"); //Yildizların basilmasi.



                }temp=temp-2; //Yine temp yani kaç tane yildiz basilmasi gerektiğini söyleyen değişkenimizi 2 azaltıyoruz.


                printf("\n"); //Ve tabi satir değiştirme işlemi.
            }


        }
        else if (menu_input==2){ //Seçenek 2.seçilmiş ise bu block yapılacak.

            printf("Ad:Ahmed Semih\nSoyad:ÖZMEKİK\nOgrenci no:171044039\n"); //Ögrenci bilgilerini ekrana bastırdım.


        }

    }



    return 0;
}

