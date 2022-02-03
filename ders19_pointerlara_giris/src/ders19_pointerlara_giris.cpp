//============================================================================
// Name        : ders19_pointerlara_giris.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a = 5;

	int *ptr = &a;

	cout << "Değişkenin Adresi : " << &a << endl;
	cout << "Değişkenin Adresi : " << ptr << endl;
	cout << "Değişkenin Değeri: " << *ptr << endl;
	*ptr = 6;
	cout << "Değişkenin Yeni Değeri: " << *ptr << endl;


	return 0;
}
