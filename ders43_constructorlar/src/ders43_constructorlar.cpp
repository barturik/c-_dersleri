//============================================================================
// Name        : ders43_constructorlar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

class Employee{
private:
	string name;
	int salary;
	int id;

public:

	Employee(string isim, int maas, int kimlik){
		name = isim;
		salary = maas;
		id = kimlik;
	}

	void setSalary(int maas){
		salary = maas;
	}

	int getSalary(){
		return salary;
	}


	void setName(string isim){
		name = isim;
	}

	string getName(){
		return name;
	}

	void showInfos(){
		cout << "İsim: " << name << endl;
		cout << "Maaş: " << salary << endl;
		cout << "Kimlik: " << id << endl;
	}

};

int main() {

	Employee employee("Ahmet Bartu",10000,17);

	employee.showInfos();



	return 0;
}
