#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Loops D�ng�ler 
	//For kere yap 100 kere 1000kere yap
	
	for(int i = 0;i<30;i++){
		std::cout << "Dongu"<<i<<std::endl;
	}
	

	
	//While loops
	
	int i=1;
	//while(true),while(false),while(i==1)
	int a = 0;
	int b = 0;
	char islem = '+';
	
	while (true) {
	std::cout << "Birinci sayi"<<std::endl;
	std::cin >> a;
	std::cout << "�kinci sayi"<<std::endl;
	std::cin >> b;
	
	std::cout << "�slem giriniz"<< std::endl;
	std::cin >> islem ;
	
	if (islem != '+' && islem != '-' && islem !='*' && islem !='/' ) {
		std::cout << "Bilinmeyen islem"<<std::endl;
		break; //Break d�ng�y� k�rar
	}
	
	switch(islem){
		case '+':
			std::cout << "Sonuc"<<a+b;
			break;
		case '-':
			std::cout << "Sonuc"<<a-b;
			break;
		case '/':
			std::cout << "Sonuc"<<a/b;
			break;
		case '*':
			std::cout << "Sonuc"<<a*b;	
			break;
		default:
			std::cout << "Bilinmeyen islem"<<std::endl;
			break;	 	
	}
		
		
	}
	
	//Do-While
	//�arta bakmaks�z�n d�ng� en az bir kere �al���r
	do {
				std::cout << "Bir kere olsun �al��an i�lem";
	}while(false);
	
	//Goto,break,continue

	
	for(int i = 0 ; i<10;i++){
	if(i == 1){
		continue; // 1 ' i yazd�rma ve devam et
		
	}
	std::cout << i<<std::endl ;
    }
    
    
    for(int i = 0 ; i<10;i++){
	if(i == 1){
		goto stop; //  goto stop ' a geldi�i zaman stop i�erisindeki i�lemi uygular
		
	}
	std::cout << i<<std::endl ;
    }
    
    
    stop:   //Stop i�erisindeki i�lem
    	std::cout<<"Durdu";
    
    
    
	
	
	return 0;
	
}
