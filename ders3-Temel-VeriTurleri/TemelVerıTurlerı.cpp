#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char d = 'A';
	
	char c = 96;
	
	char b = 120;
	
	char e[] = "Selim";
	
	std:: cout<<e;
	std::cout << b;
	std::cout << c;
	std::cout << d;
	std::cout << b+d;
		
	signed int s = -1;
	unsigned int u = 1;
	
	if(s<u){
		std::cout << "Kucuk";
	}
	else{
		std::cout << "Kucuk degil";
	}
	

	
	unsigned short x {655535};
	std::cout << "x yeni deger "<<x << "\n";
	
	x = 65536;
	std::cout << "x yeni deger "<<x<<"\n";
	
	x = 65537;
	std::cout << "x son deger "<<x<<"\n";	
	
	unsigned z {3};
	unsigned y {5};
	std::cout << z - y << "\n";
	
	float f{123456789.0f}; // bilimsel gösterim
	std::cout <<f;
	
	double l{1.20000};
	std::cout<<l;
	
	bool p = true; // 1 
	bool o = false; //  0 deðeri alýr
	
	std::cout << p;
	std:: cout <<o;
	
	auto char r[] = "Test";
	auto float i = 5.5f;
	auto int ye = 185;
	
	std::cout << r;
	std::cout << i;
	std::cout << ye;
	
	
	
	return 0;
}
