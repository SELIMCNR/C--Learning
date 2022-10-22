#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a = 0;
	int b = 0;
	char islem = 'a';
	
	std::cout << "Birinci sayi "<<std::endl;
	std::cin>>a;
	
	std::cout <<"Ýkinci sayi" <<std::endl;
	std::cin >> islem;
	
	
	switch(islem){
		case '+':
				std::cout << "Sonuc: "<<a+b;
				break;
		case '-':
				std::cout << "Sonuc: "<<a-b;
				break;
		case '*':
				std::cout << "Sonuc: "<<a*b;
				break;
		case '/':
		        std::cout << "Sonuc: "<<a/b;
				break;
		default:
				std::cout <<"Bilinmeyen islem";
				break;										
	}
	
	
	return 0;
}
