#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Loops Döngüler 
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
	std::cout << "Ýkinci sayi"<<std::endl;
	std::cin >> b;
	
	std::cout << "Ýslem giriniz"<< std::endl;
	std::cin >> islem ;
	
	if (islem != '+' && islem != '-' && islem !='*' && islem !='/' ) {
		std::cout << "Bilinmeyen islem"<<std::endl;
		break; //Break döngüyü kýrar
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
	//Þarta bakmaksýzýn döngü en az bir kere çalýþýr
	do {
				std::cout << "Bir kere olsun çalýþan iþlem";
	}while(false);
	
	//Goto,break,continue

	
	for(int i = 0 ; i<10;i++){
	if(i == 1){
		continue; // 1 ' i yazdýrma ve devam et
		
	}
	std::cout << i<<std::endl ;
    }
    
    
    for(int i = 0 ; i<10;i++){
	if(i == 1){
		goto stop; //  goto stop ' a geldiði zaman stop içerisindeki iþlemi uygular
		
	}
	std::cout << i<<std::endl ;
    }
    
    
    stop:   //Stop içerisindeki iþlem
    	std::cout<<"Durdu";
    
    
    
	
	
	return 0;
	
}
