#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() { 

	//Sabit tan�m
	const int x {4};
	std::cout << x ;
	
	//T�r d�n���m�
	//kapal� t�r d�n���m� 
	int a = 10;
	a = 1.4;
	std::cout << a;
	
	//a��k t�r d�n���m�
	int s = 10;
	s = static_cast<int>(5.9);
	std::cout<<s;

	char ch{97};
	std::cout<< static_cast<int>(ch);

}
