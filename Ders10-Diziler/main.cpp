#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   
   //Diziler  ayn� t�rden bir�ok de�i�kene tek bir tan�mlay�c� ile eri�medir.Toplu veri t�r�d�r.
    
    int puanlar[5]={10,20,30,40,50}; // 5 elemanl� dizi
    		//indis:0 ,1 ,2 ,3 ,4;	
    int point[] = {1,2,3,4,5,6,7,8}; // eleman say�s� belli olmayan dizi
    
	int point2[5]{}; // 5 elemanl� i�erisinde sadece 0 olan dizi  
    
	std::cout<<puanlar[0]; 
    
	std::cout<<puanlar[1];
    
	std::cout<<point[7]; // 7.indisi yazd�r�r
    
    std::cout<<point2[0];  //0 say�s�n� getirir
    
	//D�zi ram
	std::cout<<puanlar; // puanlar dizisinin ilk eleman�n�n  adresteki de�eri g�sterilir
	
	std::cout<<*puanlar; // ilk eleman�n de�eri g�sterilir * pointer de�er g�sterme i�lemi yapar
	
	//Dizi Pointer
	int puans[3] {10,20,30};
	std::cout<<puans<<std::endl;  //puans dizisinin ilk eleman�n�n bellek adresini verir. 
	
	std::cout << *puans; // puans dizisinin ilk eleman�n�n de�erini verir.
	
	int* ptr = puans; // puans dizisinin bellek adresini verir
	std::cout << ptr<<std::endl; // bellek adresini verdi
	std::cout << *ptr<<std::endl;  // de�i�kenin de�erini verdi
		
	int* ptr1 = puans +1; // +0 0.de�er ,+1 1.de�er ,+2 2.de�er ,+3 dersek hata al�r�z farkl� bir bellek de�eri gelir
	std::cout << *ptr1; //dizinin 1 de�erini verir

	int* ptr2 = puans +3;  //+3 dersek hata al�r�z farkl� bir bellek de�eri gelir
	std::cout << *ptr2;

	
	int sayilar [3]{10,20,30};	
	//Dizi d�ng�lerde kullan�m�
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
