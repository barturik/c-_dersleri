//============================================================================
// Name        : ders29_icice_yapilar.cpp
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
	Address address;

};

int main() {



	Employee employee = {12,"Ahmet Bartu Yilmaz","Bilişim",{"İzmir",5}};

	employee.id = 12;
	employee.name = "Ahmet Bartu Yılmaz";
	employee.department = "Bilişim";

	employee.address = {"İzmir", 7};


	/*cout << employee.id << endl;
	cout << employee.name << endl;
	cout << employee.department << endl;
	cout << employee.address.cityName << endl;
	cout << employee.address.No << endl;*/






	return 0;
}
