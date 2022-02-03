//============================================================================
// Name        : ders28_fonksiyonlar_ve_yap�lar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Employee {

	int id;
	string name;
	string department;

};

void show(Employee* employee){

	employee-> id = 30;
	cout << "Id: " << employee->id << endl;
		cout << "İsim: " << employee->name << endl;
		cout << "Departman: " << employee->department << endl;
}

void showEmployee(Employee employee){
	employee.id = 30;
	cout << "Id: " << employee.id << endl;
	cout << "İsim: " << employee.name << endl;
	cout << "Departman: " << employee.department << endl;
}


int main() {

	Employee employee1 = {12,"Ahmet Bartu Yılmaz","Yazılım Tasarım"};

	showEmployee (employee1);

	//cout << employee1.id << endl;

	show(&employee1);
	cout << employee1.id << endl;



	return 0;
}
