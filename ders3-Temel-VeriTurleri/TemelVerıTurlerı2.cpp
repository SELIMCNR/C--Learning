#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() { 

	//Sabit taným
	const int x {4};
	std::cout << x ;
	
	//Tür dönüþümü
	//kapalý tür dönüþümü 
	int a = 10;
	a = 1.4;
	std::cout << a;
	
	//açýk tür dönüþümü
	int s = 10;
	s = static_cast<int>(5.9);
	std::cout<<s;

	char ch{97};
	std::cout<< static_cast<int>(ch);

}
