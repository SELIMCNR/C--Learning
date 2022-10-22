#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a = 0;
	int b = 0;
	char islem = ' ';
	
	std::cout << "Birinci sayi" << std::endl;
	std::cin>>a;
	std::cout << "Ýkinci sayi" << std::endl;
	std::cin>>b;
	
	std::cout << "Ýslem giriniz" << std::endl;
	std::cin >>islem;
	
	if(islem == '+'){
		std::cout << "Sonuc: "<< a+b;
	}
	else if (islem == '-'){
		std::cout << "Sonuc: "<< a-b;
	}
	else {
		std::cout << "Ýslem yok";
	}
	
	// < ,> <= ,>=,!=,==, x + 5> 100 || x+5 >10, && , x*5 <10 && x*2 >4
	  
	
	
	
	
}
