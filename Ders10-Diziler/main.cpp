#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   
   //Diziler  ayný türden birçok deðiþkene tek bir tanýmlayýcý ile eriþmedir.Toplu veri türüdür.
    
    int puanlar[5]={10,20,30,40,50}; // 5 elemanlý dizi
    		//indis:0 ,1 ,2 ,3 ,4;	
    int point[] = {1,2,3,4,5,6,7,8}; // eleman sayýsý belli olmayan dizi
    
	int point2[5]{}; // 5 elemanlý içerisinde sadece 0 olan dizi  
    
	std::cout<<puanlar[0]; 
    
	std::cout<<puanlar[1];
    
	std::cout<<point[7]; // 7.indisi yazdýrýr
    
    std::cout<<point2[0];  //0 sayýsýný getirir
    
	//DÝzi ram
	std::cout<<puanlar; // puanlar dizisinin ilk elemanýnýn  adresteki deðeri gösterilir
	
	std::cout<<*puanlar; // ilk elemanýn deðeri gösterilir * pointer deðer gösterme iþlemi yapar
	
	//Dizi Pointer
	int puans[3] {10,20,30};
	std::cout<<puans<<std::endl;  //puans dizisinin ilk elemanýnýn bellek adresini verir. 
	
	std::cout << *puans; // puans dizisinin ilk elemanýnýn deðerini verir.
	
	int* ptr = puans; // puans dizisinin bellek adresini verir
	std::cout << ptr<<std::endl; // bellek adresini verdi
	std::cout << *ptr<<std::endl;  // deðiþkenin deðerini verdi
		
	int* ptr1 = puans +1; // +0 0.deðer ,+1 1.deðer ,+2 2.deðer ,+3 dersek hata alýrýz farklý bir bellek deðeri gelir
	std::cout << *ptr1; //dizinin 1 deðerini verir

	int* ptr2 = puans +3;  //+3 dersek hata alýrýz farklý bir bellek deðeri gelir
	std::cout << *ptr2;

	
	int sayilar [3]{10,20,30};	
	//Dizi döngülerde kullanýmý
	for(int i=0 ; i<3;i++){
		std::cout<<sayilar[i]<<std::endl;
	}
	
	int i=0;
	while(i<3){
		std::cout<<sayilar[i]<<std::endl;
		i++;
	}
	
	int i2=0;
	do{	
	
	
		std::cout<<sayilar[i2]<<std::endl;
			i2++;

	}while(i2<3);
	
	return 0;
}
