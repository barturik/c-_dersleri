//============================================================================
// Name        : ders18_fonksiyon_return.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// void sadece cout'u çalıştırır
// return: çıktı değeri verir

int toplam(int a, int b, int c){
	//cout << "Toplam: " << a+b+c << endl;

	return a + b + c;
}

int main() {

	int a = toplam(1,2,3);

	cout << "a: " << a << endl;

	return 0;
}
