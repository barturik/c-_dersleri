//============================================================================
// Name        : ders45_constructor_overloading.cpp
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
	Employee(){
		this->name = "Bilgi Yok";
		this->salary = 0;
		this->id = 0;
	}
	/*Employee(string name, int salary){
		this->name = name;
		this->salary = salary;
		this->id = 0;
	}

	Employee(string name, int salary, int id){
		this->name = name;
		this->salary = salary;
		this->id = id;
	}*/

	void setSalary(int salary){
		this->salary = salary;
	}

	int getSalary(){
		return salary;
	}


	void setName(string name){
		this->name = name;
	}

	string getName(){
		return name;
	}

	void showInfos(){
		cout << "İsim: " << this->name << endl;
		cout << "Maaş: " << this->salary << endl;
		cout << "Kimlik: " << this->id << endl;
	}

};

int main() {

	//Employee employee1("Ahmet Bartu",10000,17);
	//Employee employee2("Yağmur",10000);
	Employee employee3;

	//employee1.showInfos();

	//employee2.showInfos();

	employee3.showInfos();



	return 0;
}
