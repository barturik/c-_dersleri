//============================================================================
// Name        : ders34_null_pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int *ptr1 = nullptr;

	/*ptr = new int;

	*ptr = 10;

	delete ptr; // dangling referans pointer

	*ptr = 10;

	cout << *ptr << endl;*/

	int *ptr2 = nullptr;

	ptr1 = new int;

	*ptr1 = 10;

	ptr2 = ptr1;

	delete ptr1;

	*ptr2 = 20;

	cout << *ptr2 << endl;



	return 0;
}
