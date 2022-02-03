//============================================================================
// Name        : ders21_pointer_aritmetigi_array_iliskisi.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// array'in index değerini belirtmez isek, cout ile array'in adres değeri çıkar


int main() {

	/*int array[] = {1,2,3,4};

	int *ptr = &array[2];

	cout << ptr << endl;*/


	/* cout << array << endl;

	cout << array + 1 << endl;

	cout << array + 2 << endl;*/

	string array[] = {"Ahmet","Bartu","Yilmaz"};

	string *ptr = array;

	cout << ptr + 1 << endl;

	cout << *(ptr+1) << endl;

	cout << ptr[2] << endl;




	return 0;
}
