//============================================================================
// Name        : ders17_fonksiyon_tanimlama.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void factorial(int sayi){
	int faktoriyel1 = 1;

	for (int i = 2 ; i <= sayi ; i++){
		faktoriyel1 *= i;
	}
	cout << faktoriyel1 << endl;
}

// void çıktı vermez

/*void selamla(){
	cout <<"Naber?"<< endl;
	cout <<"Nasılsın?"<< endl;
}*/

//void selamla();

int main() {
	int sayi;
	cout << "Sayıyı giriniz: ";
	cin >> sayi;
	factorial(sayi);

	/*selamla(); //fonksiyon çağrısı
	selamla();
	selamla();*/




	return 0;
}

/*void selamla(){
	cout <<"Naber?"<< endl;
	cout <<"Nasılsın?"<< endl;
}*/
