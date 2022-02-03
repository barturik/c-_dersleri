//============================================================================
// Name        : ders20_pointer_kullanma_mantigi.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include <iostream>
using namespace std;
void degerDegistir(int *ptr){
	*ptr = 20;
	cout << "Fonksiyon içindeki değer: " << *ptr << endl;


}
// c++'ın call by value örneği
int main() {
	int a = 10;
	cout << "a değişkeninin değeri : " << a << endl;
	degerDegistir(&a);
	cout << "a değişkeninin yeni değeri: " << a << endl;



	return 0;
}
