#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//5.Fonksiyon 
double topla2(double sayi,double sayi2){
	return sayi + sayi2; //double say� verilirse parametrelere bu fonksiyon �al���r
}

//4.Fonksiyon fonksiyona de�i�ken �zerinden de�er atama
int topla2(int sayi,int sayi2){

	return sayi + sayi2	;
}

//3.Fonksiyon
void mesaj1(){
	std::cout << "Test";
}

//2.fonksiyon
int topla(int sayi1,int sayi2){
	mesaj1(); //3.fonksiyon  ba�ka fonksiyon i�erisinde �a�r�ld�
	return sayi1 + sayi2;
}

void mesaj(char msg,char msg1){
	std::cout << "Merhaba Dunya \n"<<msg<<msg1;
}

int main(int argc, char** argv) {
	
	mesaj('a','b'); //Fonksiyon �a�r�m� yap�ld� 
	mesaj('a','b');
	
	topla(5,2); //2.fonksiyon �a�r�ld�
	std::cout << std::endl<<topla(5,2);
	
	int a = 5;
	int b = 20;
	topla2(a,b); //4.fonksiyon �a�r�ld�
	std::cout << "int"<<std:: endl<<topla2(a,b);
	
	double c = 10.5;
	double d = 20.2;
	topla2(c,d); //5.fonksiyon �a�r�ld�
	std::cout<<" \n double " << std:: endl<<topla2(c,d);
	
	
	
	return 0;
}
