//============================================================================
// Name        : ders33_dinamik_bellek_y�netimi_part2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int *ptr;

	int size;

	cout << "kaç değer saklayacksınız: ";

	cin >> size;

	ptr = new int[size];

	for(int i = 0; i < size; i++){

		cout << "Değer: ";
		cin >> ptr[i];


	}

	for (int i = 0; i<size; i++){
		cout <<"Eleman: " << ptr[i] << endl;
	}

	delete []ptr;

	return 0;
}
