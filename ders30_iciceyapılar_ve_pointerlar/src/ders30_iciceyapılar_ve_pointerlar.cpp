//============================================================================
// Name        : ders30_iciceyap�lar_ve_pointerlar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Address {

	string cityName;

	int No;

};

struct Employee{
	int id;
	string name;
	string department;
	Address* address;

};

int main() {

	Employee employee;
	employee.id = 12;
	employee.name = "Ahmet Bartu Yılmaz";
	employee.department = "Bilişim";

	Address adress = {"İzmir",5};

	employee.address = &adress;

	Employee* ptr = &employee;

	cout << ptr->address->cityName<<endl;
	cout << ptr->address->No<<endl;







	return 0;
}
