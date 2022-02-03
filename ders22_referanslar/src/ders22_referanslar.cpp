//============================================================================
// Name        : ders22_referanslar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*void degerDegistir(int &ref){

	ref = 20;

}*/

int main() {

	/*int a = 10;

	int &ref = a;

	ref++;

	cout << "a'nın değeri : " << a << endl;

	degerDegistir(a);

	cout << "a'nın yeni değeri: " << a << endl;*/

	int a = 10;

	int *ptr;

	ptr = &a;

	/*int &ref;

	ref = a;*/



	return 0;
}



