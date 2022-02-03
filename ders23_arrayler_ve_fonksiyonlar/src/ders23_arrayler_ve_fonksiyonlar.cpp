//============================================================================
// Name        : ders23_arrayler_ve_fonksiyonlar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printArray(int *ptr[],int size){
	for(int i = 0; i < size; i++){
		cout << ptr[i] << endl;

	}
}

int main() {

	int a[] = {1,2,3,4,5};

	printArray(a,5);

	return 0;
}
