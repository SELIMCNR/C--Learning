#include <iostream>
#include <string>

//using hint = int(*)(int,int);

inline int cikar(int a , int b){
	return a - b;
}

int topla (int a , int b){
	return a + b ;
}
int getir(int(*fint)(int,int)){ //fonkisyon i�inde fonksiyon �a��rma
	int a = fint(10,20);
	return a;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void print(std::string text="",int a =0,bool as = false){ // parametrelere de�er girilmez ise varsay�lan de�erler �al���r
	std::cout << text<< a<<as; 
}

int main(int argc, char** argv) {
	print("Merhaba",45,true);

   //fonksiyon i�inde fonksiyon
	int b = getir(topla);
	std::cout << b;
	
	// inline fonksiyon 
	std::cout<<cikar(5,50);
	return 0;
}

