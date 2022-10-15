#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a = 10;
	int b = 20 ;
	int sonuc = a + b; 
	sonuc = a-b;
	sonuc = a*b; 
	sonuc =a / b;
	
	std::cout << sonuc <<std::endl;
	
	int c = 100;
	c++;
	std::cout <<c<<std::endl;
	
	int d = 100;
	d--;
	std::cout <<d<<std::endl;

	// =  , +=, a-=5 a = a-5  , *= ,/= , %=
	int e = 50;
	e+=40;
	std::cout<<e;
	
	// < , > , >= ,<=, ==, != , ! not , && , ||
	
	
	int f = 30 ;
	int* fPtr = &f;
	std::cout << fPtr; // f deðiþkeninin ramdaki bellek adresini verir.
	std::cout << *fPtr; // deðiþkenin tekrar deðerini döndürür
	std::cout << &*fPtr;
	std::cout << *&*fPtr;
	
}
