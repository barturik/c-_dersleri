//============================================================================
// Name        : ders16_switch_case.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int islem;

	cout << "İşlemi Giriniz: " << endl;

	cin >> islem;

	switch (islem){

	case 1:
		cout << "1. İşlemi Seçtiniz..." << endl;
		break;

	case 2:
		cout << "2. İşlemi Seçtiniz..." << endl;
		break;

	case 3:
		cout << "3. İşlemi Seçtiniz..." << endl;
		break;

	case 4:
		cout << "4. İşlemi Seçtiniz..." << endl;
		break;

	default:
		cout << "Hatalı giriş yaptınız" << endl;
		break;

	}

	return 0;
}
