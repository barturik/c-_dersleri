//============================================================================
// Name        : ders27_pointerlar_ve_yap�lar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct empolyee {

	int id;
	string name;
	string department;

};

int main() {

	empolyee empolyee1;

	empolyee1.id = 12;

	empolyee1.name = "Ahmet Bartu Yilmaz";

	empolyee1.department = "Yazilim Tasarim";

	empolyee* ptr = &empolyee1;

	cout << empolyee1.name << endl;

	cout << ptr->department << endl;



	return 0;
}
