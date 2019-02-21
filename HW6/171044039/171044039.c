//AHMED SEMİH ÖZMEKİK  171044039


#include <stdio.h>

int main() {

	//KISIM 1

	int guncel,hedef;  //Guncel hiz ve hedef hiz integer degiskenlerini tanimladım.



    	printf("Guncel hiziniz: \n"); //Kullanıcıdan hangi input'u istedigimi belirttim.(güncel hizi)
    	scanf("%d",&guncel);    //Kullanıcıdan Güncel hizinin input'unu aldım.

    	printf("Hedef hiziniz: \n");  //Kullanıcıdan hangi input'u istediğimi belirttim.(hedef hizi)
    	scanf("%d",&hedef);	//Kullanıcıdan Hedef hizinin input'unu aldım.

	printf("Güncel hiziniz:%d\nHedef hiziniz:%d\n",guncel,hedef); //Alınan verilerin ekrana basılması.

	//KISIM 2 

    	if(guncel<=hedef) {	/*Güncel hızının hedef hizdan küçük veya hedef hizina eşit olduğu durumlarda bu blok'a girecek*/

        	for(guncel;guncel<=hedef;guncel++) { /*Güncel hiz hedef hizdan büyük olana dek gövdedeki işlemi yapacak ve yaptıktan sonra güncel hizi 1 arttıracak.Bu şekilde koşulu
							sağlayamayıncaya kadar döngü devam edecek.*/
					
            	printf("Hiziniz: %d\n",guncel);//Kullanıcıya yeni hizi hakkında output verme işlemi.

    		}

    	}

	//KISIM 3

    else { // Güncel hiz hedef hizdan büyükse bu blok'a girecek.


        printf("Hiziniz hedef hizdan yüksektir.\n"); /*Güncel hizin hedef hizdan büyük olduğunu kullanıcıya output olarak bildirecek.*/
    	}


return 0;
	
}	

