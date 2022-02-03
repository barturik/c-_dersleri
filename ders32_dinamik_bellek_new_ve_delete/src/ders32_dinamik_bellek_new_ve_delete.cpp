//============================================================================
// Name        : ders32_dinamik_bellek_new_ve_delete.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int *ptr = new int;

	*ptr = 5;

	delete ptr;

	/*int *ptr;

	int a[] = {1,2,3,4,5};

	ptr = a;

	cout << ptr[1] << endl;*/



	return 0;
}
