//============================================================================
// Name        : ders40_private_erisim_belirleyicisi.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>

using namespace std;

class Employee{
public:
	string name;
	int id;
	int salary;

	void showInfos();



};
int main() {

	Employee employee;

	employee.id = 12;

	employee.name = "Ahmet Bartu";

	employee.salary = 3000;

	employee.showInfos();



	return 0;
}
