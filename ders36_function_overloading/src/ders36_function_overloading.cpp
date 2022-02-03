//============================================================================
// Name        : ders36_function_overloading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void selamla(){
	cout << "Merhaba" << endl;
}

void selamla(string name){
	cout << "Merhaba " << name << endl;
}

void selamla(string name1, string name2){
	cout << "Merhaba " << name1 << "," << name2 << endl;
}

int main() {

	selamla();

	selamla("Mustafa Murat");

	selamla("Ahmet","Bartu");


	return 0;
}
